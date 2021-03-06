/*
 * Copyright (C) 2015 Holmes Team at HUAWEI Noah's Ark Lab.
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
 *
 */

#include "NullEvaluator.h"
#include "../Common.h"

REGISTER_CLASS(NullEvaluator)
REGISTER_COMMAND_LINE_PARAMETER(
		NullEvaluator,
		"{\"type\":\"Evaluator\","
		"\"name\":\"NullEvaluator\","
		"\"parameter\":{"
		"\"-f\":\"Frequency\""
		"}}"
		"");

NullEvaluator::NullEvaluator() {
}

NullEvaluator::~NullEvaluator() {
}

void NullEvaluator::addResult(const Instance&, double[]) {
	return;
}

Measures* NullEvaluator::getMeasures() {
	return nullptr;
}

string NullEvaluator::toString() {
	return " ";
}
