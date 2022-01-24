#include <Arduino.h>

#include <ros.h>
#include <ros/time.h>
#include <tf/tf.h>
#include <tf/transform_broadcaster.h>

#include <config.h>

ros::NodeHandle nh;
geometry_msgs::TransformStamped t;
tf::TransformBroadcaster broadcaster;

double x = 1.0;
double y = 0.0;
double theta = 1.57;

char base_link[] = "/base_link";
char odom[] = "/odom";


void setup() {
  nh.initNode();
  broadcaster.init(nh);

  
}

void loop() {

  /*
    TODO: as of 1/23/22 i am unable to work on transforms and other things 
    due to shiping of parts 
  */

  


  t.header.frame_id = odom;
  t.child_frame_id = base_link;

  t.transform.rotation = tf::createQuaternionFromYaw(theta);
  t.header.stamp = nh.now();
  
  broadcaster.sendTransform(t);
  nh.spinOnce();
}