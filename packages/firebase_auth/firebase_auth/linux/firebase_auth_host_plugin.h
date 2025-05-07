
#ifndef FIREBASE_AUTH_HOST_PLUGIN_PRIVATE_H_
#define FIREBASE_AUTH_HOST_PLUGIN_PRIVATE_H_

#include "flutter_linux/flutter_linux.h"
#include "messages.g.h"

class FirebaseAuthHostPlugin {
  FlPluginRegistrar* registrar;

 public:
  FirebaseAuthHostPlugin(FlPluginRegistrar* registrar);

  static void register_id_token_listener(
      FirebaseAuthPlatformInterfaceAuthPigeonFirebaseApp* app,
      FirebaseAuthPlatformInterfaceFirebaseAuthHostApiResponseHandle*
          response_handle,
      gpointer user_data) {}

  static void register_auth_state_listener(
      FirebaseAuthPlatformInterfaceAuthPigeonFirebaseApp* app,
      FirebaseAuthPlatformInterfaceFirebaseAuthHostApiResponseHandle*
          response_handle,
      gpointer user_data) {}

  static void use_emulator(
      FirebaseAuthPlatformInterfaceAuthPigeonFirebaseApp* app,
      const gchar* host, int64_t port,
      FirebaseAuthPlatformInterfaceFirebaseAuthHostApiResponseHandle*
          response_handle,
      gpointer user_data) {}

  static void apply_action_code(
      FirebaseAuthPlatformInterfaceAuthPigeonFirebaseApp* app,
      const gchar* code,
      FirebaseAuthPlatformInterfaceFirebaseAuthHostApiResponseHandle*
          response_handle,
      gpointer user_data) {}

  static void check_action_code(
      FirebaseAuthPlatformInterfaceAuthPigeonFirebaseApp* app,
      const gchar* code,
      FirebaseAuthPlatformInterfaceFirebaseAuthHostApiResponseHandle*
          response_handle,
      gpointer user_data) {}

  static void confirm_password_reset(
      FirebaseAuthPlatformInterfaceAuthPigeonFirebaseApp* app,
      const gchar* code, const gchar* new_password,
      FirebaseAuthPlatformInterfaceFirebaseAuthHostApiResponseHandle*
          response_handle,
      gpointer user_data) {}

  static void create_user_with_email_and_password(
      FirebaseAuthPlatformInterfaceAuthPigeonFirebaseApp* app,
      const gchar* email, const gchar* password,
      FirebaseAuthPlatformInterfaceFirebaseAuthHostApiResponseHandle*
          response_handle,
      gpointer user_data) {}

  static void sign_in_anonymously(
      FirebaseAuthPlatformInterfaceAuthPigeonFirebaseApp* app,
      FirebaseAuthPlatformInterfaceFirebaseAuthHostApiResponseHandle*
          response_handle,
      gpointer user_data) {}

  static void sign_in_with_credential(
      FirebaseAuthPlatformInterfaceAuthPigeonFirebaseApp* app, FlValue* input,
      FirebaseAuthPlatformInterfaceFirebaseAuthHostApiResponseHandle*
          response_handle,
      gpointer user_data) {}

  static void sign_in_with_custom_token(
      FirebaseAuthPlatformInterfaceAuthPigeonFirebaseApp* app,
      const gchar* token,
      FirebaseAuthPlatformInterfaceFirebaseAuthHostApiResponseHandle*
          response_handle,
      gpointer user_data) {}

  static void sign_in_with_email_and_password(
      FirebaseAuthPlatformInterfaceAuthPigeonFirebaseApp* app,
      const gchar* email, const gchar* password,
      FirebaseAuthPlatformInterfaceFirebaseAuthHostApiResponseHandle*
          response_handle,
      gpointer user_data) {}

  static void sign_in_with_email_link(
      FirebaseAuthPlatformInterfaceAuthPigeonFirebaseApp* app,
      const gchar* email, const gchar* email_link,
      FirebaseAuthPlatformInterfaceFirebaseAuthHostApiResponseHandle*
          response_handle,
      gpointer user_data) {}

  static void sign_in_with_provider(
      FirebaseAuthPlatformInterfaceAuthPigeonFirebaseApp* app,
      FirebaseAuthPlatformInterfacePigeonSignInProvider* sign_in_provider,
      FirebaseAuthPlatformInterfaceFirebaseAuthHostApiResponseHandle*
          response_handle,
      gpointer user_data) {}

  static void sign_out(
      FirebaseAuthPlatformInterfaceAuthPigeonFirebaseApp* app,
      FirebaseAuthPlatformInterfaceFirebaseAuthHostApiResponseHandle*
          response_handle,
      gpointer user_data) {}

  static void fetch_sign_in_methods_for_email(
      FirebaseAuthPlatformInterfaceAuthPigeonFirebaseApp* app,
      const gchar* email,
      FirebaseAuthPlatformInterfaceFirebaseAuthHostApiResponseHandle*
          response_handle,
      gpointer user_data) {}

  static void send_password_reset_email(
      FirebaseAuthPlatformInterfaceAuthPigeonFirebaseApp* app,
      const gchar* email,
      FirebaseAuthPlatformInterfacePigeonActionCodeSettings*
          action_code_settings,
      FirebaseAuthPlatformInterfaceFirebaseAuthHostApiResponseHandle*
          response_handle,
      gpointer user_data) {}

  static void send_sign_in_link_to_email(
      FirebaseAuthPlatformInterfaceAuthPigeonFirebaseApp* app,
      const gchar* email,
      FirebaseAuthPlatformInterfacePigeonActionCodeSettings*
          action_code_settings,
      FirebaseAuthPlatformInterfaceFirebaseAuthHostApiResponseHandle*
          response_handle,
      gpointer user_data) {}

  static void set_language_code(
      FirebaseAuthPlatformInterfaceAuthPigeonFirebaseApp* app,
      const gchar* language_code,
      FirebaseAuthPlatformInterfaceFirebaseAuthHostApiResponseHandle*
          response_handle,
      gpointer user_data) {}

  static void set_settings(
      FirebaseAuthPlatformInterfaceAuthPigeonFirebaseApp* app,
      FirebaseAuthPlatformInterfacePigeonFirebaseAuthSettings* settings,
      FirebaseAuthPlatformInterfaceFirebaseAuthHostApiResponseHandle*
          response_handle,
      gpointer user_data) {}

  static void verify_password_reset_code(
      FirebaseAuthPlatformInterfaceAuthPigeonFirebaseApp* app,
      const gchar* code,
      FirebaseAuthPlatformInterfaceFirebaseAuthHostApiResponseHandle*
          response_handle,
      gpointer user_data) {}

  static void verify_phone_number(
      FirebaseAuthPlatformInterfaceAuthPigeonFirebaseApp* app,
      FirebaseAuthPlatformInterfacePigeonVerifyPhoneNumberRequest* request,
      FirebaseAuthPlatformInterfaceFirebaseAuthHostApiResponseHandle*
          response_handle,
      gpointer user_data) {}

  static void revoke_token_with_authorization_code(
      FirebaseAuthPlatformInterfaceAuthPigeonFirebaseApp* app,
      const gchar* authorization_code,
      FirebaseAuthPlatformInterfaceFirebaseAuthHostApiResponseHandle*
          response_handle,
      gpointer user_data) {}
};

#endif  // FIREBASE_AUTH_HOST_PLUGIN_PRIVATE_H_
