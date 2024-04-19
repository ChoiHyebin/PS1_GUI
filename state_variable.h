#ifndef STATE_VARIABLE_H
#define STATE_VARIABLE_H

#include "stdio.h"
#include <QString>

class State_variable
{
public:
    State_variable();

    double obj_rotation_x=0;
    double obj_rotation_y=0;
    double obj_rotation_z=0;

    double obj_translation_x=0;
    double obj_translation_y=0;
    double obj_translation_z=0;

    double bdr_rotation_x=0;
    double bdr_rotation_y=0;
    double bdr_rotation_z=0;

    double bdr_translation_x=0;
    double bdr_translation_y=0;
    double bdr_translation_z=0;

    double rotation_del=0;
    double translation_del=0;

    double obj_x_length=0;
    double obj_y_length=0;
    double obj_z_length=0;

    double bdr_x_length=0;
    double bdr_y_length=0;
    double bdr_z_length=0;

    double obj_opacity_val=1;
    double bdr_opacity_val=0.1;

    int camera_po1 = 0, camera_po2 = 0, camera_po3 = 0;
    int camera_fo1 = 0, camera_fo2 = 0, camera_fo3 = 0;

    double zoom_val = 0;

    int File_State=0;

    int RButton = 0;
    int TButton = 0;
    int Boundary_State=0;

    int Scale_State=0;

    int Camera_State=0;
    int Camera_State2=0;

    std::string stl_link;

private:

};

#endif // STATE_VARIABLE_H
