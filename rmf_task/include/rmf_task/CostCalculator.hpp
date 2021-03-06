/*
 * Copyright (C) 2021 Open Source Robotics Foundation
 *
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
 *
*/

#ifndef RMF_TASK__COSTCALCULATOR_HPP
#define RMF_TASK__COSTCALCULATOR_HPP

#include <memory>

namespace rmf_task {

//==============================================================================
// Forward declare abstract interface. The definition will remain as internal detail.
/// A class that is used within the TaskPlanner to compute the cost of a set of
/// assignments.
class CostCalculator;

using CostCalculatorPtr = std::shared_ptr<CostCalculator>;
using ConstCostCalculatorPtr = std::shared_ptr<const CostCalculator>;

} // namespace rmf_task

# endif // RMF_TASK__COSTCALCULATOR_HPP
