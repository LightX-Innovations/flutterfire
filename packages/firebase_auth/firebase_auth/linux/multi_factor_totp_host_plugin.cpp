#include "multi_factor_totp_host_plugin.h"

MultiFactorTotpHostPlugin::MultiFactorTotpHostPlugin(
    FlPluginRegistrar* registrar)
    : registrar(FL_PLUGIN_REGISTRAR(g_object_ref(registrar))) {
  static FirebaseAuthPlatformInterfaceMultiFactorTotpHostApiVTable api_vtable =
      {
          .generate_secret = generate_secret,
          .get_assertion_for_enrollment = get_assertion_for_enrollment,
          .get_assertion_for_sign_in = get_assertion_for_sign_in,
      };

  firebase_auth_platform_interface_multi_factor_totp_host_api_set_method_handlers(
      fl_plugin_registrar_get_messenger(registrar), nullptr, &api_vtable,
      g_object_ref(this), g_object_unref);
}
