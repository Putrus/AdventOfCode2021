#include "Task.h"

#include "../Day1/SonarSweep.h"
#include "../Day2/Dive.h"
#include "../Day3/BinaryDiagnostic.h"
#include "../Day4/GiantSquid.h"
#include "../Day5/HydrothermalVenture.h"

Task::Task(std::vector<TaskName> tasks) {
   task = new NoTask();
   for (const auto& t : tasks) {
      switch (t) {
      case TaskName::SonarSweep:
         task = new SonarSweep(task);
         break;
      case TaskName::Dive:
         task = new Dive(task);
         break;
      case TaskName::BinaryDiagnostic:
         task = new BinaryDiagnostic(task);
         break;
      case TaskName::GiantSquid:
         task = new GiantSquid(task);
         break;
      case TaskName::HydrothermalVenture:
         task = new HydrothermalVenture(task);
         break;
      }
   }
}

void Task::printResults() {
   task->printResults();
}