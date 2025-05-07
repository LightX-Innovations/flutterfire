#include "multi_factor_resolver_host_plugin.h"

MultiFactorResolverHostPlugin::MultiFactorResolverHostPlugin(
    FlPluginRegistrar* registrar)
    : registrar(FL_PLUGIN_REGISTRAR(g_object_ref(registrar))) {
  static FirebaseAuthPlatformInterfaceMultiFactoResolverHostApiVTable
      api_vtable = {
          .resolve_sign_in = resolve_sign_in,
      };

  firebase_auth_platform_interface_multi_facto_resolver_host_api_set_method_handlers(
      fl_plugin_registrar_get_messenger(registrar), nullptr, &api_vtable,
      g_object_ref(this), g_object_unref);
}
