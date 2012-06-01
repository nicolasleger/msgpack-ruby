/*
 * MessagePack for Ruby
 *
 * Copyright (C) 2008-2012 FURUHASHI Sadayuki
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

#include "buffer_class.h"
#include "packer_class.h"
#include "unpacker_class.h"
#include "core_ext.h"

void Init_msgpack(void)
{
    VALUE mMessagePack = rb_define_module("MessagePack");

    /* MessagePack::VERSION */
    rb_define_const(mMessagePack, "VERSION", rb_str_new2(MESSAGEPACK_VERSION));

    MessagePack_Buffer_module_init(mMessagePack);
    MessagePack_Packer_module_init(mMessagePack);
    MessagePack_Unpacker_module_init(mMessagePack);
    MessagePack_core_ext_module_init();
}

