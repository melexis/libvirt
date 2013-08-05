#include <config.h>
/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "lxc_monitor_protocol.h"

bool_t
xdr_virLXCProtocolExitStatus (XDR *xdrs, virLXCProtocolExitStatus *objp)
{

         if (!xdr_enum (xdrs, (enum_t *) objp))
                 return FALSE;
        return TRUE;
}

bool_t
xdr_virLXCProtocolExitEventMsg (XDR *xdrs, virLXCProtocolExitEventMsg *objp)
{

         if (!xdr_virLXCProtocolExitStatus (xdrs, &objp->status))
                 return FALSE;
        return TRUE;
}

bool_t
xdr_virLXCProtocolInitEventMsg (XDR *xdrs, virLXCProtocolInitEventMsg *objp)
{

         if (!xdr_uint64_t (xdrs, &objp->initpid))
                 return FALSE;
        return TRUE;
}

bool_t
xdr_virLXCProtocolProcedure (XDR *xdrs, virLXCProtocolProcedure *objp)
{

         if (!xdr_enum (xdrs, (enum_t *) objp))
                 return FALSE;
        return TRUE;
}
