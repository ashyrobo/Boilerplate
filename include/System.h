/*
* SVI-SLAM is based on ORB-SLAM2 which was released under GPLv3
* For more information see <https://github.com/raulmur/ORB_SLAM2>
* Raúl Mur-Artal <raulmur at unizar dot es> (University of Zaragoza)
*/

#pragma once

namespace VISSLAM
{
    class System
    {
        public:
	        // Initialize the SLAM system. It launches the Local Mapping, Loop Closing and Viewer threads.
            System();
            ~System();


        private:


    };
}