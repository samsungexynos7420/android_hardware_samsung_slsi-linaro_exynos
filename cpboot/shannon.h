#ifndef __CBD_SHANNON_H__
#define __CBD_SHANNON_H__

enum shannon_image_type {
	IMG_TOC = 0,
	IMG_BOOT,
	IMG_MAIN,
#ifdef SUPPORT_SS310AP
	IMG_VSS,
#endif
	IMG_NV,
	MAX_IMAGE_TYPE
};

enum shannon_dl_stage {
	BOOT_STAGE = 0,
	TOC_STAGE,
	MAIN_STAGE,
#ifdef SUPPORT_SS310AP
	VSS_STAGE,
#endif
	NV_STAGE,
	FIN_STAGE,
	SHANNON_MAX_DL_STAGE
};

struct shannon_boot_args {
	struct boot_args *cbd_args;
	struct std_boot_args *std_args;
	int load_fd;
	int bin_fd;
	int nv_fd;
} __packed;

#endif

