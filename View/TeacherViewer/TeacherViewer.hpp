#if !defined(VIEW_TEACHERVIEWR_HPP)
#define VIEW_TEACHERVIEWR_HPP

#include <iostream>
#include <string>
#include <list>
#include "../../controller/TeacherController/TeacherController.hpp"

namespace view
{
    namespace teacher
    {
        void print(controller::TeacherController & teacherController);
        void insert(controller::TeacherController & teacherController);
    }

}

#endif // VIEW_TEACHERVIEWR_HPP