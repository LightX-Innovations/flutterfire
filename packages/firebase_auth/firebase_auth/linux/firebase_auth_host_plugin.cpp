#include "firebase_auth_host_plugin.h"

FirebaseAuthHostPlugin::FirebaseAuthHostPlugin(FlPluginRegistrar* registrar)
    : registrar(FL_PLUGIN_REGISTRAR(g_object_ref(registrar))) {
  static FirebaseAuthPlatformInterfaceFirebaseAuthHostApiVTable api_vtable = {
      .register_id_token_listener = register_id_token_listener,
      .register_auth_state_listener = register_auth_state_listener,
      .use_emulator = use_emulator,
      .apply_action_code = apply_action_code,
      .check_action_code = check_action_code,
      .confirm_password_reset = confirm_password_reset,
      .create_user_with_email_and_password =
          create_user_with_email_and_password,
      .sign_in_anonymously = sign_in_anonymously,
      .sign_in_with_credential = sign_in_with_credential,
      .sign_in_with_custom_token = sign_in_with_custom_token,
      .sign_in_with_email_and_password = sign_in_with_email_and_password,
      .sign_in_with_email_link = sign_in_with_email_link,
      .sign_in_with_provider = sign_in_with_provider,
      .sign_out = sign_out,
      .fetch_sign_in_methods_for_email = fetch_sign_in_methods_for_email,
      .send_password_reset_email = send_password_reset_email,
      .send_sign_in_link_to_email = send_sign_in_link_to_email,
      .set_language_code = set_language_code,
      .set_settings = set_settings,
      .verify_password_reset_code = verify_password_reset_code,
      .verify_phone_number = verify_phone_number,
      .revoke_token_with_authorization_code =
          revoke_token_with_authorization_code,

  };

  firebase_auth_platform_interface_firebase_auth_host_api_set_method_handlers(
      fl_plugin_registrar_get_messenger(registrar), nullptr, &api_vtable,
      g_object_ref(this), g_object_unref);
}
