#ifndef CRASHLOG_H
#define CRASHLOG_H

#ifdef __cplusplus
extern "C"
{
#endif	/* __cplusplus */


#include <windows.h>
#include <stdio.h>
#include <stdarg.h>
#include <excpt.h>
#include <stdio.h>
#include <imagehlp.h>

EXCEPTION_DISPOSITION __cdecl 
exception_handler(struct _EXCEPTION_RECORD *exception_record, 
                  void *establisher_frame, 
                  struct _CONTEXT *context_record, 
                  void *dispatcher_context);

#ifdef __cplusplus
}
#endif /* __cplusplus */
  
#endif
