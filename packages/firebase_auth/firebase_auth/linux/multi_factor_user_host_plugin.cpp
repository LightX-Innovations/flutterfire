#include "multi_factor_user_host_plugin.h"

MultiFactorUserHostPlugin::MultiFactorUserHostPlugin(
    FlPluginRegistrar* registrar)
    : registrar(FL_PLUGIN_REGISTRAR(g_object_ref(registrar))) {
  static FirebaseAuthPlatformInterfaceMultiFactorUserHostApiVTable api_vtable =
      {
          .enroll_phone = enroll_phone,
          .enroll_totp = enroll_totp,
          .get_session = get_session,
          .unenroll = unenroll,
          .get_enrolled_factors = get_enrolled_factors,
      };

  firebase_auth_platform_interface_multi_factor_user_host_api_set_method_handlers(
      fl_plugin_registrar_get_messenger(registrar), nullptr, &api_vtable,
      g_object_ref(this), g_object_unref);
}
