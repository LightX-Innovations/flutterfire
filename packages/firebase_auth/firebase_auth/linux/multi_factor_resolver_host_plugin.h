#ifndef MULTI_FACTOR_RESOLVER_HOST_PLUGIN_PRIVATE_H_
#define MULTI_FACTOR_RESOLVER_HOST_PLUGIN_PRIVATE_H_

#include "flutter_linux/flutter_linux.h"
#include "messages.g.h"

class MultiFactorResolverHostPlugin {
  FlPluginRegistrar* registrar;

 public:
  MultiFactorResolverHostPlugin(FlPluginRegistrar* registrar);

  static void resolve_sign_in(
      const gchar* resolver_id,
      FirebaseAuthPlatformInterfacePigeonPhoneMultiFactorAssertion* assertion,
      const gchar* totp_assertion_id,
      FirebaseAuthPlatformInterfaceMultiFactoResolverHostApiResponseHandle*
          response_handle,
      gpointer user_data) {}
};

#endif  // MULTI_FACTOR_RESOLVER_HOST_PLUGIN_PRIVATE_H_
