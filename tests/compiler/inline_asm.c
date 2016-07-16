//
// Copyright 2016 Jeff Bush
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#include <stdio.h>

int main(void)
{
    int result;
    int a = 5;
    int b = 7;

    asm("add_i %0, %1, %2" : "=s" (result) : "s" (a), "s" (b));

    printf("result = %d\n", result);    // CHECK: result = 12
}
