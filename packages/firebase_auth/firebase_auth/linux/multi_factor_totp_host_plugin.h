#ifndef MULTI_FACTOR_TOTP_HOST_PLUGIN_PRIVATE_H_
#define MULTI_FACTOR_TOTP_HOST_PLUGIN_PRIVATE_H_

#include "flutter_linux/flutter_linux.h"
#include "messages.g.h"

class MultiFactorTotpHostPlugin {
  FlPluginRegistrar* registrar;

 public:
  MultiFactorTotpHostPlugin(FlPluginRegistrar* registrar);

  static void generate_secret(
      const gchar* session_id,
      FirebaseAuthPlatformInterfaceMultiFactorTotpHostApiResponseHandle*
          response_handle,
      gpointer user_data) {}

  static void get_assertion_for_enrollment(
      const gchar* secret_key, const gchar* one_time_password,
      FirebaseAuthPlatformInterfaceMultiFactorTotpHostApiResponseHandle*
          response_handle,
      gpointer user_data) {}

  static void get_assertion_for_sign_in(
      const gchar* enrollment_id, const gchar* one_time_password,
      FirebaseAuthPlatformInterfaceMultiFactorTotpHostApiResponseHandle*
          response_handle,
      gpointer user_data) {}
};

#endif  // MULTI_FACTOR_TOTP_HOST_PLUGIN_PRIVATE_H_
