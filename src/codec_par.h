/*
  Aerostat Beam Coder - Node.js native bindings for FFmpeg.
  Copyright (C) 2019  Streampunk Media Ltd.

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <https://www.gnu.org/licenses/>.

  https://www.streampunk.media/ mailto:furnace@streampunk.media
  14 Ormiscaig, Aultbea, Achnasheen, IV22 2JJ  U.K.
*/

#ifndef CODEC_PAR_H
#define CODEC_PAR_H

#include "node_api.h"
#include "beamcoder_util.h"

extern "C" {
  #include <libavcodec/avcodec.h>
}

void codecParamsFinalizer(napi_env env, void* data, void* hint);

napi_value makeCodecParameters(napi_env env, napi_callback_info info);
napi_value makeCodecParamsInternal(napi_env env, napi_callback_info info, bool ownAlloc);
napi_status fromAVCodecParameters(napi_env env, AVCodecParameters* c, bool ownAlloc, napi_value* result);

napi_value codecParToJSON(napi_env env, napi_callback_info info);

#endif // CODEC_PAR_H
