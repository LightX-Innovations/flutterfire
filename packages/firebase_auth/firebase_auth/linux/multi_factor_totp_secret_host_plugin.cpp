#include "multi_factor_totp_secret_host_plugin.h"

MultiFactorTotpSecretHostPlugin::MultiFactorTotpSecretHostPlugin(
    FlPluginRegistrar* registrar)
    : registrar(FL_PLUGIN_REGISTRAR(g_object_ref(registrar))) {
  static FirebaseAuthPlatformInterfaceMultiFactorTotpSecretHostApiVTable api_vtable =
      {
          .generate_qr_code_url = generate_qr_code_url,
          .open_in_otp_app = open_in_otp_app,
      };

  firebase_auth_platform_interface_multi_factor_totp_secret_host_api_set_method_handlers(
      fl_plugin_registrar_get_messenger(registrar), nullptr, &api_vtable,
      g_object_ref(this), g_object_unref);
}
