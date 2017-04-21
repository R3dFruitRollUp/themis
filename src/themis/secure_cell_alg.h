/*
 * Copyright (c) 2015 Cossack Labs Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _SECURE_CELL_ALG_H_
#define _SECURE_CELL_ALG_H_

/*default values*/
#ifndef THEMIS_AUTH_SYM_ALG
#define THEMIS_AUTH_SYM_KEY_LENGTH SOTER_SYM_AEAD_DEFAULT_ALG_KEY_LENGTH
#define THEMIS_AUTH_SYM_ALG (SOTER_SYM_AEAD_DEFAULT_ALG)
#define THEMIS_AUTH_SYM_IV_LENGTH SOTER_SYM_AEAD_DEFAULT_ALG_IV_SIZE
#define THEMIS_AUTH_SYM_AUTH_TAG_LENGTH SOTER_SYM_AEAD_DEFAULT_ALG_AUTH_TAG_SIZE
#endif

/*default values*/
#ifndef THEMIS_SYM_ALG
#define THEMIS_SYM_KEY_LENGTH SOTER_SYM_DEFAULT_ALG_KEY_LENGTH
#define THEMIS_SYM_ALG (SOTER_SYM_DEFAULT_ALG)
#define THEMIS_SYM_IV_LENGTH SOTER_SYM_DEFAULT_ALG_IV_SIZE
#endif

#endif /* _SECURE_CELL_ALG_H_ */
