#ifndef MULTI_FACTOR_TOTP_SECRET_HOST_PLUGIN_PRIVATE_H_
#define MULTI_FACTOR_TOTP_SECRET_HOST_PLUGIN_PRIVATE_H_

#include "flutter_linux/flutter_linux.h"
#include "messages.g.h"

class MultiFactorTotpSecretHostPlugin {
  FlPluginRegistrar* registrar;

 public:
  MultiFactorTotpSecretHostPlugin(FlPluginRegistrar* registrar);

  static void generate_qr_code_url(
      const gchar* secret_key, const gchar* account_name, const gchar* issuer,
      FirebaseAuthPlatformInterfaceMultiFactorTotpSecretHostApiResponseHandle*
          response_handle,
      gpointer user_data) {}

  static void open_in_otp_app(
      const gchar* secret_key, const gchar* qr_code_url,
      FirebaseAuthPlatformInterfaceMultiFactorTotpSecretHostApiResponseHandle*
          response_handle,
      gpointer user_data) {}
};

#endif  // MULTI_FACTOR_TOTP_SECRET_HOST_PLUGIN_PRIVATE_H_
