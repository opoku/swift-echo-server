//
//  ServerSignals.h
//  HTTPServer
//
//  Created by Osei Poku on 7/25/15.
//  Copyright © 2015 OPKoder. All rights reserved.
//

#ifndef ServerSignals_h
#define ServerSignals_h
#include <signal.h>
#include <stdbool.h>
#include <stdio.h>
#include <dispatch/dispatch.h>
void register_signal_handler(int signal, dispatch_block_t handler);
#endif /* ServerSignals_h */
