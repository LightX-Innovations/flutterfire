#include "firebase_auth/firebase_auth_plugin.h"

#include "firebase_auth_host_plugin.h"
#include "firebase_auth_user_host_plugin.h"
#include "multi_factor_resolver_host_plugin.h"
#include "multi_factor_totp_host_plugin.h"
#include "multi_factor_totp_secret_host_plugin.h"
#include "multi_factor_user_host_plugin.h"

void firebase_auth_plugin_register_with_registrar(
    FlPluginRegistrar* registrar) {
  FirebaseAuthHostPlugin* auth_host_plugin =
      new FirebaseAuthHostPlugin(registrar);
  g_object_unref(auth_host_plugin);

  FirebaseAuthUserHostPlugin* auth_user_plugin =
      new FirebaseAuthUserHostPlugin(registrar);
  g_object_unref(auth_user_plugin);

  MultiFactorResolverHostPlugin* multi_factor_resolver_plugin =
      new MultiFactorResolverHostPlugin(registrar);
  g_object_unref(multi_factor_resolver_plugin);

  MultiFactorTotpHostPlugin* multi_factor_totp_plugin =
      new MultiFactorTotpHostPlugin(registrar);
  g_object_unref(multi_factor_totp_plugin);

  MultiFactorTotpSecretHostPlugin* multi_factor_totp_secret_plugin =
      new MultiFactorTotpSecretHostPlugin(registrar);
  g_object_unref(multi_factor_totp_secret_plugin);

  MultiFactorUserHostPlugin* multi_factor_user_plugin =
      new MultiFactorUserHostPlugin(registrar);
  g_object_unref(multi_factor_user_plugin);
}
