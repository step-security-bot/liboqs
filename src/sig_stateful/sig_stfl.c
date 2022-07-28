// SPDX-License-Identifier: MIT

#include <assert.h>
#include <stdlib.h>
#if defined(_WIN32)
#include <string.h>
#define strcasecmp _stricmp
#else
#include <strings.h>
#endif

#include <oqs/oqs.h>

OQS_API const char *OQS_SIG_STFL_alg_identifier(size_t i) {

	const char *a[OQS_SIG_algs_length] = {

		OQS_SIG_STFL_alg_xmss_sha256_h10,
		OQS_SIG_STFL_alg_xmss_sha256_h16,
		OQS_SIG_STFL_alg_xmss_sha256_h20,
		OQS_SIG_STFL_alg_xmss_sha512_h10,
		OQS_SIG_STFL_alg_xmss_sha512_h16,
		OQS_SIG_STFL_alg_xmss_sha512_h20,
		OQS_SIG_STFL_alg_xmss_shake256_h10,
		OQS_SIG_STFL_alg_xmss_shake256_h16,
		OQS_SIG_STFL_alg_xmss_shake256_h20,
		OQS_SIG_STFL_alg_xmss_shake512_h10,
		OQS_SIG_STFL_alg_xmss_shake512_h16,
		OQS_SIG_STFL_alg_xmss_shake512_h20,
	};

	if (i >= OQS_SIG_algs_length) {
		return NULL;
	} else {
		return a[i];
	}
}


OQS_API int OQS_SIG_STFL_alg_count(void) {
	return OQS_SIG_algs_length;
}


OQS_API int OQS_SIG_STFL_alg_is_enabled(const char *method_name) {
	assert(method_name != NULL);

	if (0) {

	} else if (0 == strcasecmp(method_name, OQS_SIG_STFL_alg_xmss_sha256_h10)) {
#ifdef OQS_ENABLE_SIG_STFL_XMSS_SHA256_H10
		return 1;
#else
		return 0;
#endif
	} else if (0 == strcasecmp(method_name, OQS_SIG_STFL_alg_xmss_sha256_h16)) {
#ifdef OQS_ENABLE_SIG_STFL_XMSS_SHA256_H16
		return 1;
#else
		return 0;
#endif
	} else if (0 == strcasecmp(method_name, OQS_SIG_STFL_alg_xmss_sha256_h20)) {
#ifdef OQS_ENABLE_SIG_STFL_XMSS_SHA256_H20
		return 1;
#else
		return 0;
#endif
	} else if (0 == strcasecmp(method_name, OQS_SIG_STFL_alg_xmss_sha512_h10)) {
#ifdef OQS_ENABLE_SIG_STFL_XMSS_SHA512_H10
		return 1;
#else
		return 0;
#endif
	} else if (0 == strcasecmp(method_name, OQS_SIG_STFL_alg_xmss_sha512_h16)) {
#ifdef OQS_ENABLE_SIG_STFL_XMSS_SHA512_H16
		return 1;
#else
		return 0;
#endif
	} else if (0 == strcasecmp(method_name, OQS_SIG_STFL_alg_xmss_sha512_h20)) {
#ifdef OQS_ENABLE_SIG_STFL_XMSS_SHA512_H20
		return 1;
#else
		return 0;
#endif
	} else if (0 == strcasecmp(method_name, OQS_SIG_STFL_alg_xmss_shake256_h10)) {
#ifdef OQS_ENABLE_SIG_STFL_XMSS_SHAKE256_H10
		return 1;
#else
		return 0;
#endif
	} else if (0 == strcasecmp(method_name, OQS_SIG_STFL_alg_xmss_shake256_h16)) {
#ifdef OQS_ENABLE_SIG_STFL_XMSS_SHAKE256_H16
		return 1;
#else
		return 0;
#endif
	} else if (0 == strcasecmp(method_name, OQS_SIG_STFL_alg_xmss_shake256_h20)) {
#ifdef OQS_ENABLE_SIG_STFL_XMSS_SHAKE256_H20
		return 1;
#else
		return 0;
#endif
	} else if (0 == strcasecmp(method_name, OQS_SIG_STFL_alg_xmss_shake512_h10)) {
#ifdef OQS_ENABLE_SIG_STFL_XMSS_SHAKE512_H10
		return 1;
#else
		return 0;
#endif
	} else if (0 == strcasecmp(method_name, OQS_SIG_STFL_alg_xmss_shake512_h16)) {
#ifdef OQS_ENABLE_SIG_STFL_XMSS_SHAKE512_H16
		return 1;
#else
		return 0;
#endif
	} else if (0 == strcasecmp(method_name, OQS_SIG_STFL_alg_xmss_shake512_h20)) {
#ifdef OQS_ENABLE_SIG_STFL_XMSS_SHAKE512_H20
		return 1;
#else
		return 0;
#endif
	}
	// EDIT-WHEN ADDING MORE XMSS/XMSS^MT ALGS
	else {
		return 0;
	}
}


OQS_API OQS_SIG_STFL *OQS_SIG_STFL_new(const char *method_name) {
	assert(method_name != NULL);

	if (0) {

	} else if (0 == strcasecmp(method_name, OQS_SIG_STFL_alg_xmss_sha256_h10)) {
#ifdef OQS_ENABLE_SIG_STFL_XMSS_SHA256_H10
		return OQS_SIG_STFL_alg_xmss_sha256_h10_new();
#else
		return NULL;
#endif
	} else if (0 == strcasecmp(method_name, OQS_SIG_STFL_alg_xmss_sha256_h16)) {
#ifdef OQS_ENABLE_SIG_STFL_XMSS_SHA256_H16
		return OQS_SIG_STFL_alg_xmss_sha256_h16_new();
#else
		return NULL;
#endif
	} else if (0 == strcasecmp(method_name, OQS_SIG_STFL_alg_xmss_sha256_h20)) {
#ifdef OQS_ENABLE_SIG_STFL_XMSS_SHA256_H20
		return OQS_SIG_STFL_alg_xmss_sha256_h20_new();
#else
		return NULL;
#endif
	} else if (0 == strcasecmp(method_name, OQS_SIG_STFL_alg_xmss_sha512_h10)) {
#ifdef OQS_ENABLE_SIG_STFL_XMSS_SHA512_H10
		return OQS_SIG_STFL_alg_xmss_sha512_h10_new();
#else
		return NULL;
#endif
	} else if (0 == strcasecmp(method_name, OQS_SIG_STFL_alg_xmss_sha512_h16)) {
#ifdef OQS_ENABLE_SIG_STFL_XMSS_SHA512_H16
		return OQS_SIG_STFL_alg_xmss_sha512_h16_new();
#else
		return NULL;
#endif
	} else if (0 == strcasecmp(method_name, OQS_SIG_STFL_alg_xmss_sha512_h20)) {
#ifdef OQS_ENABLE_SIG_STFL_XMSS_SHA512_H20
		return OQS_SIG_STFL_alg_xmss_sha512_h20_new();
#else
		return NULL;
#endif
	} else if (0 == strcasecmp(method_name, OQS_SIG_STFL_alg_xmss_shake256_h10)) {
#ifdef OQS_ENABLE_SIG_STFL_XMSS_SHAKE256_H10
		return OQS_SIG_STFL_alg_xmss_shake256_h10_new();
#else
		return NULL;
#endif
	} else if (0 == strcasecmp(method_name, OQS_SIG_STFL_alg_xmss_shake256_h16)) {
#ifdef OQS_ENABLE_SIG_STFL_XMSS_SHAKE256_H20
		return OQS_SIG_STFL_alg_xmss_shake256_h16_new();
#else
		return NULL;
#endif
	} else if (0 == strcasecmp(method_name, OQS_SIG_STFL_alg_xmss_shake256_h20)) {
#ifdef OQS_ENABLE_SIG_STFL_XMSS_SHAKE256_H20
		return OQS_SIG_STFL_alg_xmss_shake256_h20_new();
#else
		return NULL;
#endif
	} else if (0 == strcasecmp(method_name, OQS_SIG_STFL_alg_xmss_shake512_h10)) {
#ifdef OQS_ENABLE_SIG_STFL_XMSS_SHAKE512_H10
		return OQS_SIG_STFL_alg_xmss_shake512_h10_new();
#else
		return NULL;
#endif
	} else if (0 == strcasecmp(method_name, OQS_SIG_STFL_alg_xmss_shake512_h16)) {
#ifdef OQS_ENABLE_SIG_STFL_XMSS_SHAKE512_H16
		return OQS_SIG_STFL_alg_xmss_shake512_h16_new();
#else
		return NULL;
#endif
	} else if (0 == strcasecmp(method_name, OQS_SIG_STFL_alg_xmss_shake512_h20)) {
#ifdef OQS_ENABLE_SIG_STFL_XMSS_SHAKE512_H20
		return OQS_SIG_STFL_alg_xmss_shake512_h20_new();
#else
		return NULL;
#endif
	} else {
		return NULL;
	}
}


OQS_API OQS_STATUS OQS_SIG_STFL_keypair(const OQS_SIG_STFL *sig, uint8_t *public_key, OQS_SECRET_KEY *secret_key) {
	if (sig == NULL || sig->keypair(public_key, secret_key) != 0) {
		return OQS_ERROR;
	} else {
		return OQS_SUCCESS;
	}
}

OQS_API OQS_STATUS OQS_SIG_STFL_sign(const OQS_SIG_STFL *sig, uint8_t *signature, size_t *signature_len, const uint8_t *message, size_t message_len, OQS_SECRET_KEY *secret_key) {
	if (sig == NULL || sig->sign(signature, signature_len, message, message_len, secret_key) != 0) {
		return OQS_ERROR;
	} else {
		return OQS_SUCCESS;
	}
}

OQS_API OQS_STATUS OQS_SIG_STFL_verify(const OQS_SIG_STFL *sig, const uint8_t *message, size_t message_len, const uint8_t *signature, size_t signature_len, const uint8_t *public_key) {
	if (sig == NULL || sig->verify(message, message_len, signature, signature_len, public_key) != 0) {
		return OQS_ERROR;
	} else {
		return OQS_SUCCESS;
	}
}


OQS_API void OQS_SIG_STFL_free(OQS_SIG_STFL *sig) {
	OQS_MEM_insecure_free(sig);
}



// ================================= OQS_SECRET_KEY FUNCTION ===============================================


OQS_API OQS_SECRET_KEY *OQS_SECRET_KEY_derive_subkey(OQS_SECRET_KEY *master_key, const unsigned long long number_of_signatures) {
	assert(master_key != NULL);
	assert(number_of_signatures > 0);

	return OQS_SECRET_KEY_alg_derive_subkey(master_key, number_of_signatures);
}


OQS_API OQS_SECRET_KEY *OQS_SECRET_KEY_new(const char *method_name) {
	assert(method_name != NULL);

	if (0) {

	} else if (0 == strcasecmp(method_name, OQS_SIG_STFL_alg_xmss_sha256_h10)) {
#ifdef OQS_ENABLE_SIG_STFL_XMSS_SHA256_H10
		return OQS_SECRET_KEY_XMSS_SHA256_H10_new();
#else
		return NULL;
#endif
	} else if (0 == strcasecmp(method_name, OQS_SIG_STFL_alg_xmss_sha256_h16)) {
#ifdef OQS_ENABLE_SIG_STFL_XMSS_SHA256_H16
		return OQS_SECRET_KEY_XMSS_SHA256_H16_new();
#else
		return NULL;
#endif
	} else if (0 == strcasecmp(method_name, OQS_SIG_STFL_alg_xmss_sha256_h20)) {
#ifdef OQS_ENABLE_SIG_STFL_XMSS_SHA256_H20
		return OQS_SECRET_KEY_XMSS_SHA256_H20_new();
#else
		return NULL;
#endif
	} else if (0 == strcasecmp(method_name, OQS_SIG_STFL_alg_xmss_sha512_h10)) {
#ifdef OQS_ENABLE_SIG_STFL_XMSS_SHA512_H10
		return OQS_SECRET_KEY_XMSS_SHA512_H10_new();
#else
		return NULL;
#endif
	} else if (0 == strcasecmp(method_name, OQS_SIG_STFL_alg_xmss_sha512_h16)) {
#ifdef OQS_ENABLE_SIG_STFL_XMSS_SHA512_H16
		return OQS_SECRET_KEY_XMSS_SHA512_H16_new();
#else
		return NULL;
#endif
	} else if (0 == strcasecmp(method_name, OQS_SIG_STFL_alg_xmss_sha512_h20)) {
#ifdef OQS_ENABLE_SIG_STFL_XMSS_SHA512_H20
		return OQS_SECRET_KEY_XMSS_SHA512_H20_new();
#else
		return NULL;
#endif
	} else if (0 == strcasecmp(method_name, OQS_SIG_STFL_alg_xmss_shake256_h10)) {
#ifdef OQS_ENABLE_SIG_STFL_XMSS_SHAKE256_H10
		return OQS_SECRET_KEY_XMSS_SHAKE256_H10_new();
#else
		return NULL;
#endif
	} else if (0 == strcasecmp(method_name, OQS_SIG_STFL_alg_xmss_shake256_h16)) {
#ifdef OQS_ENABLE_SIG_STFL_XMSS_SHAKE256_H20
		return OQS_SECRET_KEY_XMSS_SHAKE256_H16_new();
#else
		return NULL;
#endif
	} else if (0 == strcasecmp(method_name, OQS_SIG_STFL_alg_xmss_shake256_h20)) {
#ifdef OQS_ENABLE_SIG_STFL_XMSS_SHAKE256_H20
		return OQS_SECRET_KEY_XMSS_SHAKE256_H20_new();
#else
		return NULL;
#endif
	} else if (0 == strcasecmp(method_name, OQS_SIG_STFL_alg_xmss_shake512_h10)) {
#ifdef OQS_ENABLE_SIG_STFL_XMSS_SHAKE512_H10
		return OQS_SECRET_KEY_XMSS_SHAKE512_H10_new();
#else
		return NULL;
#endif
	} else if (0 == strcasecmp(method_name, OQS_SIG_STFL_alg_xmss_shake512_h16)) {
#ifdef OQS_ENABLE_SIG_STFL_XMSS_SHAKE512_H16
		return OQS_SECRET_KEY_XMSS_SHAKE512_H16_new();
#else
		return NULL;
#endif
	} else if (0 == strcasecmp(method_name, OQS_SIG_STFL_alg_xmss_shake512_h20)) {
#ifdef OQS_ENABLE_SIG_STFL_XMSS_SHAKE512_H20
		return OQS_SECRET_KEY_XMSS_SHAKE512_H20_new();
#else
		return NULL;
#endif
	} else {
		return NULL;
	}
}


OQS_API void OQS_SECRET_KEY_free(OQS_SECRET_KEY *sk) {
	OQS_MEM_secure_free(sk->secret_key, sk->length_secret_key);
	OQS_MEM_secure_free(sk, sizeof(sk));
}

// ==========================================================================================================