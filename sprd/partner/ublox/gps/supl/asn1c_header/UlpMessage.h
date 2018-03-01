/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ULP"
 * 	found in "supl.asn"
 * 	`asn1c -gen-PER -fnative-types`
 */

#ifndef	_UlpMessage_H_
#define	_UlpMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SUPLINIT.h"
#include "SUPLSTART.h"
#include "SUPLRESPONSE.h"
#include "SUPLPOSINIT.h"
#include "SUPLPOS.h"
#include "SUPLEND.h"
#include "SUPLAUTHREQ.h"
#include "SUPLAUTHRESP.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UlpMessage_PR {
	UlpMessage_PR_NOTHING,	/* No components present */
	UlpMessage_PR_msSUPLINIT,
	UlpMessage_PR_msSUPLSTART,
	UlpMessage_PR_msSUPLRESPONSE,
	UlpMessage_PR_msSUPLPOSINIT,
	UlpMessage_PR_msSUPLPOS,
	UlpMessage_PR_msSUPLEND,
	UlpMessage_PR_msSUPLAUTHREQ,
	UlpMessage_PR_msSUPLAUTHRESP,
	/* Extensions may appear below */
	
} UlpMessage_PR;

/* UlpMessage */
typedef struct UlpMessage {
	UlpMessage_PR present;
	union UlpMessage_u {
		SUPLINIT_t	 msSUPLINIT;
		SUPLSTART_t	 msSUPLSTART;
		SUPLRESPONSE_t	 msSUPLRESPONSE;
		SUPLPOSINIT_t	 msSUPLPOSINIT;
		SUPLPOS_t	 msSUPLPOS;
		SUPLEND_t	 msSUPLEND;
		SUPLAUTHREQ_t	 msSUPLAUTHREQ;
		SUPLAUTHRESP_t	 msSUPLAUTHRESP;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UlpMessage_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UlpMessage;

#ifdef __cplusplus
}
#endif

#endif	/* _UlpMessage_H_ */
#include <asn_internal.h>
