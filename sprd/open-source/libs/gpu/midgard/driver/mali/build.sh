make SCONS_CFLAGS="-DCONFIG_MALI_DEBUG -DCONFIG_MALI_PLATFORM_THIRDPARTY -DCONFIG_MALI_PLATFORM_FAKE " SCONS_CONFIGS="CONFIG_MALI_MIDGARD=m CONFIG_MALI_DEBUG=y CONFIG_MALI_PLATFORM_THIRDPARTY=y CONFIG_MALI_PLATFORM_THIRDPARTY_NAME=sc9838" $1
rm .*.cmd *.o
