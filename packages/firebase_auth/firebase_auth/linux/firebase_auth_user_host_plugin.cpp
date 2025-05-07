#include "firebase_auth_user_host_plugin.h"

FirebaseAuthUserHostPlugin::FirebaseAuthUserHostPlugin(
    FlPluginRegistrar* registrar)
    : registrar(FL_PLUGIN_REGISTRAR(g_object_ref(registrar))) {
  static FirebaseAuthPlatformInterfaceFirebaseAuthUserHostApiVTable api_vtable =
      {
          .delete_user = delete_user,
          .get_id_token = get_id_token,
          .link_with_credential = link_with_credential,
          .link_with_provider = link_with_provider,
          .reauthenticate_with_credential = reauthenticate_with_credential,
          .reauthenticate_with_provider = reauthenticate_with_provider,
          .reload = reload,
          .send_email_verification = send_email_verification,
          .unlink = unlink,
          .update_email = update_email,
          .update_password = update_password,
          .update_phone_number = update_phone_number,
          .update_profile = update_profile,
          .verify_before_update_email = verify_before_update_email,
      };

  firebase_auth_platform_interface_firebase_auth_user_host_api_set_method_handlers(
      fl_plugin_registrar_get_messenger(registrar), nullptr, &api_vtable,
      g_object_ref(this), g_object_unref);
}
