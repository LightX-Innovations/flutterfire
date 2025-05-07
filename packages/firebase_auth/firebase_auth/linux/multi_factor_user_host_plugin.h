#ifndef MULTI_FACTOR_USER_HOST_PLUGIN_PRIVATE_H_
#define MULTI_FACTOR_USER_HOST_PLUGIN_PRIVATE_H_

#include "flutter_linux/flutter_linux.h"
#include "messages.g.h"

class MultiFactorUserHostPlugin {
  FlPluginRegistrar* registrar;

 public:
  MultiFactorUserHostPlugin(FlPluginRegistrar* registrar);

  static void enroll_phone(
      FirebaseAuthPlatformInterfaceAuthPigeonFirebaseApp* app,
      FirebaseAuthPlatformInterfacePigeonPhoneMultiFactorAssertion* assertion,
      const gchar* display_name,
      FirebaseAuthPlatformInterfaceMultiFactorUserHostApiResponseHandle*
          response_handle,
      gpointer user_data) {}

  static void enroll_totp(
      FirebaseAuthPlatformInterfaceAuthPigeonFirebaseApp* app,
      const gchar* assertion_id, const gchar* display_name,
      FirebaseAuthPlatformInterfaceMultiFactorUserHostApiResponseHandle*
          response_handle,
      gpointer user_data) {}

  static void get_session(
      FirebaseAuthPlatformInterfaceAuthPigeonFirebaseApp* app,
      FirebaseAuthPlatformInterfaceMultiFactorUserHostApiResponseHandle*
          response_handle,
      gpointer user_data) {}

  static void unenroll(
      FirebaseAuthPlatformInterfaceAuthPigeonFirebaseApp* app,
      const gchar* factor_uid,
      FirebaseAuthPlatformInterfaceMultiFactorUserHostApiResponseHandle*
          response_handle,
      gpointer user_data) {}

  static void get_enrolled_factors(
      FirebaseAuthPlatformInterfaceAuthPigeonFirebaseApp* app,
      FirebaseAuthPlatformInterfaceMultiFactorUserHostApiResponseHandle*
          response_handle,
      gpointer user_data) {}
};

#endif  // MULTI_FACTOR_USER_HOST_PLUGIN_PRIVATE_H_
