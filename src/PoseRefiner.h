#ifndef POSEREFINER_H
#define POSEREFINER_H

#include "EDInterface.h"
#include "Marker.h"
#include "EDInterface.h"

namespace stag {

class PoseRefiner
{
	bool checkIfPointInQuad(const Marker& marker, const cv::Point2d& p);
	cv::Point2d projectPoint(cv::Point2d p, cv::Mat H);
public:
	bool refineMarkerPose(EDInterface* edInterface, Marker& marker);
};

} // namespace stag
#endif
