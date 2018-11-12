// this is for emacs file handling -*- mode: c++; indent-tabs-mode: nil -*-

// -- BEGIN LICENSE BLOCK ----------------------------------------------
// This program is free software licensed under the CDDL
// (COMMON DEVELOPMENT AND DISTRIBUTION LICENSE Version 1.0).
// You can find a copy of this license in LICENSE in the top
// directory of the source code.
//
// © Copyright 2018 FZI Forschungszentrum Informatik, Karlsruhe, Germany
// -- END LICENSE BLOCK ------------------------------------------------

//----------------------------------------------------------------------
/*!\file
 * 
 * \author  Simon Roesler <simon.roesler@student.kit.edu>
 * \date    2018
 *
 */
//----------------------------------------------------------------------

#pragma once


#ifdef WIN32
#include <windows.h>
#endif

//adtf
#include <adtf3.h>
#include <adtf_platform_inc.h>
#include <a_utils_platform_inc.h>
#include <adtf_systemsdk.h>

#include <opencv2/opencv.hpp>
#include <stdlib.h>

#include <ros/ros.h> 
#include <std_msgs/String.h>
#include <cv_bridge/cv_bridge.h>
#include <image_transport/image_transport.h>
#include <ros_oadrive/ImagePosition.h>
#include <oadrive_util/BirdViewConverter.h>


using namespace std;
using namespace cv;