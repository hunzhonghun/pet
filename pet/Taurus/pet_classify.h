/*
 * Copyright (c) 2022 HiSilicon (Shanghai) Technologies CO., LIMITED.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef Pet_CLASSIFY_H
#define Pet_CLASSIFY_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <errno.h>
#include "hi_comm_video.h"

#if __cplusplus
extern "C" {
#endif

/*
 * 加载宠物检测和宠物分类模型
 * Load Pet detect and classify model
 */
HI_S32 Yolo2PetDetectResnetClassifyLoad(uintptr_t* model);

/*
 * 卸载宠物检测和宠物分类模型
 * Unload Pet detect and classify model
 */
HI_S32 Yolo2PetDetectResnetClassifyUnload(uintptr_t model);

/*
 * 宠物检测和宠物分类推理
 * Pet detect and classify calculation
 */
HI_S32 Yolo2PetDetectResnetClassifyCal(uintptr_t model, VIDEO_FRAME_INFO_S *srcFrm, VIDEO_FRAME_INFO_S *dstFrm);

#ifdef __cplusplus
}
#endif
#endif
