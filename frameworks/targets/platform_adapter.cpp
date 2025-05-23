/*
 * Copyright (c) 2020-2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "platform_adapter.h"
#include <cstdlib>
#include "acelite_config.h"
#if (defined(__LINUX__) || defined(__LITEOS_A__))
#include "ace_ability.h"
#endif
#include "ace_log.h"
#include "ace_version.h"
#include "js_fwk_common.h"
#include "product_adapter.h"

namespace OHOS {
namespace ACELite {
void PrintVersionTrace()
{
#if (defined (TARGET_SIMULATOR) && (TARGET_SIMULATOR == 1))
#if (defined (ACE_LITE_VERSION_JS_API) && (ACE_LITE_VERSION_JS_API == 1))
    // output version trace on simulator
    HILOG_DEBUG(HILOG_MODULE_ACE, "ACELite version: %{public}s", ACEVersion::GetStr());
    HILOG_DEBUG(HILOG_MODULE_ACE, "ACELite commit: %{public}s", ACEVersion::GetCommit());
    HILOG_DEBUG(HILOG_MODULE_ACE, "ACELite build stamp: %{public}s", ACEVersion::GetTimeStamp());
#endif // ACE_LITE_VERSION_JS_API
#endif // TARGET_SIMULATOR
}

void SetEngineSnapshotMode(bool &mode)
{
#if (TARGET_SIMULATOR != 1)
    mode = true;
#else
    mode = false;
#endif
}

void SetEngineSnapshotModeManually(bool &mode)
{
#if (defined(__LINUX__) || defined(__LITEOS_A__))
    // if not starting debugger, on real device, give a chance to use JS mode manually
    mode = IsFileExisted(RUNTIME_MODE_FILE_PATH);
#elif (TARGET_SIMULATOR != 1)
    mode = !(IsFileExisted(RUNTIME_MODE_FILE_PATH));
#endif
}

void Terminate(uint16_t token)
{
#if (TARGET_SIMULATOR != 1)
#if (FEATURE_TERMINATE_ABILITY == 1)
    ProductAdapter::SendTerminatingRequest(token, false);
#else
    AceAbility::TerminateSelf();
#endif
#else
#ifdef _MINI_MULTI_TASKS_
    ProductAdapter::SendTerminatingRequest(token, false);
#endif
#endif
}

void Srand(unsigned seed)
{
#if (TARGET_SIMULATOR == 1)
    srand(seed);
#endif // TARGET_SIMULATOR
}
} // namespace ACELite
} // namespace OHOS
