//
//  ServerSignals.c
//  HTTPServer
//
//  Created by Osei Poku on 7/25/15.
//  Copyright © 2015 OPKoder. All rights reserved.
//

#include "ServerSignals.h"

void register_signal_handler(int sig, dispatch_block_t handler) {
    signal(sig ,SIG_IGN);
    dispatch_source_t source = dispatch_source_create(DISPATCH_SOURCE_TYPE_SIGNAL, sig, 0, dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0));
    dispatch_source_set_event_handler(source, handler);
    dispatch_resume(source);
}