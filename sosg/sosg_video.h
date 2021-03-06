#ifndef _SOSG_VIDEO_H_
#define _SOSG_VIDEO_H_

#include "SDL.h"
#include "SDL_image.h"

typedef struct sosg_video_struct *sosg_video_p;

sosg_video_p sosg_video_init(const char *path);
void sosg_video_destroy(sosg_video_p video);
void sosg_video_get_resolution(sosg_video_p video, int *resolution);
SDL_Surface *sosg_video_update(sosg_video_p video);

#endif /* _SOSG_VIDEO_H_ */
