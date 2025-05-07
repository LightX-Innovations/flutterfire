#ifndef FIREBASE_AUTH_USER_HOST_PLUGIN_PRIVATE_H_
#define FIREBASE_AUTH_USER_HOST_PLUGIN_PRIVATE_H_

#include "flutter_linux/flutter_linux.h"
#include "messages.g.h"

class FirebaseAuthUserHostPlugin {
  FlPluginRegistrar* registrar;

 public:
  FirebaseAuthUserHostPlugin(FlPluginRegistrar* registrar);

  static void delete_user(
      FirebaseAuthPlatformInterfaceAuthPigeonFirebaseApp* app,
      FirebaseAuthPlatformInterfaceFirebaseAuthUserHostApiResponseHandle*
          response_handle,
      gpointer user_data) {}

  static void get_id_token(
      FirebaseAuthPlatformInterfaceAuthPigeonFirebaseApp* app,
      gboolean force_refresh,
      FirebaseAuthPlatformInterfaceFirebaseAuthUserHostApiResponseHandle*
          response_handle,
      gpointer user_data) {}

  static void link_with_credential(
      FirebaseAuthPlatformInterfaceAuthPigeonFirebaseApp* app, FlValue* input,
      FirebaseAuthPlatformInterfaceFirebaseAuthUserHostApiResponseHandle*
          response_handle,
      gpointer user_data) {}

  static void link_with_provider(
      FirebaseAuthPlatformInterfaceAuthPigeonFirebaseApp* app,
      FirebaseAuthPlatformInterfacePigeonSignInProvider* sign_in_provider,
      FirebaseAuthPlatformInterfaceFirebaseAuthUserHostApiResponseHandle*
          response_handle,
      gpointer user_data) {}

  static void reauthenticate_with_credential(
      FirebaseAuthPlatformInterfaceAuthPigeonFirebaseApp* app, FlValue* input,
      FirebaseAuthPlatformInterfaceFirebaseAuthUserHostApiResponseHandle*
          response_handle,
      gpointer user_data) {}

  static void reauthenticate_with_provider(
      FirebaseAuthPlatformInterfaceAuthPigeonFirebaseApp* app,
      FirebaseAuthPlatformInterfacePigeonSignInProvider* sign_in_provider,
      FirebaseAuthPlatformInterfaceFirebaseAuthUserHostApiResponseHandle*
          response_handle,
      gpointer user_data) {}

  static void reload(
      FirebaseAuthPlatformInterfaceAuthPigeonFirebaseApp* app,
      FirebaseAuthPlatformInterfaceFirebaseAuthUserHostApiResponseHandle*
          response_handle,
      gpointer user_data) {}

  static void send_email_verification(
      FirebaseAuthPlatformInterfaceAuthPigeonFirebaseApp* app,
      FirebaseAuthPlatformInterfacePigeonActionCodeSettings*
          action_code_settings,
      FirebaseAuthPlatformInterfaceFirebaseAuthUserHostApiResponseHandle*
          response_handle,
      gpointer user_data) {}

  static void unlink(
      FirebaseAuthPlatformInterfaceAuthPigeonFirebaseApp* app,
      const gchar* provider_id,
      FirebaseAuthPlatformInterfaceFirebaseAuthUserHostApiResponseHandle*
          response_handle,
      gpointer user_data) {}

  static void update_email(
      FirebaseAuthPlatformInterfaceAuthPigeonFirebaseApp* app,
      const gchar* new_email,
      FirebaseAuthPlatformInterfaceFirebaseAuthUserHostApiResponseHandle*
          response_handle,
      gpointer user_data) {}

  static void update_password(
      FirebaseAuthPlatformInterfaceAuthPigeonFirebaseApp* app,
      const gchar* new_password,
      FirebaseAuthPlatformInterfaceFirebaseAuthUserHostApiResponseHandle*
          response_handle,
      gpointer user_data) {}

  static void update_phone_number(
      FirebaseAuthPlatformInterfaceAuthPigeonFirebaseApp* app, FlValue* input,
      FirebaseAuthPlatformInterfaceFirebaseAuthUserHostApiResponseHandle*
          response_handle,
      gpointer user_data) {}

  static void update_profile(
      FirebaseAuthPlatformInterfaceAuthPigeonFirebaseApp* app,
      FirebaseAuthPlatformInterfacePigeonUserProfile* profile,
      FirebaseAuthPlatformInterfaceFirebaseAuthUserHostApiResponseHandle*
          response_handle,
      gpointer user_data) {}

  static void verify_before_update_email(
      FirebaseAuthPlatformInterfaceAuthPigeonFirebaseApp* app,
      const gchar* new_email,
      FirebaseAuthPlatformInterfacePigeonActionCodeSettings*
          action_code_settings,
      FirebaseAuthPlatformInterfaceFirebaseAuthUserHostApiResponseHandle*
          response_handle,
      gpointer user_data) {}
};

#endif  // FIREBASE_AUTH_USER_HOST_PLUGIN_PRIVATE_H_
