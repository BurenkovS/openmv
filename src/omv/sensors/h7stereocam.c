/*
 * H7STEREOCAM driver.
 */
#include "omv_boardconfig.h"
#if (OMV_ENABLE_H7STEREOCAM == 1)

#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include "cambus.h"
#include "sensor.h"
#include "h7stereocam.h"
#include "py/mphal.h"

static int reset(sensor_t *sensor)
{
    int ret = 0;
    return ret;
}

static int read_reg(sensor_t *sensor, uint16_t reg_addr)
{
    uint16_t reg_data = 0;
    return reg_data;
}

static int write_reg(sensor_t *sensor, uint16_t reg_addr, uint16_t reg_data)
{
    return cambus_writew2(&sensor->bus, sensor->slv_addr, reg_addr, reg_data);
}

static int set_pixformat(sensor_t *sensor, pixformat_t pixformat)
{
    if (pixformat != PIXFORMAT_GRAYSCALE) {
        return -1;
    }
    return 0;
}

static int set_framesize(sensor_t *sensor, framesize_t framesize)
{
    int ret = 0;
    return ret;
}

static int set_colorbar(sensor_t *sensor, int enable)
{
    int ret = 0;
    return ret;
}

static int set_auto_gain(sensor_t *sensor, int enable, float gain_db, float gain_db_ceiling)
{
    int ret = 0;
    return ret;
}

static int get_gain_db(sensor_t *sensor, float *gain_db)
{
    int ret = 0;
    return ret;
}

static int set_auto_exposure(sensor_t *sensor, int enable, int exposure_us)
{
    int ret = 0;
    return ret;
}

static int get_exposure_us(sensor_t *sensor, int *exposure_us)
{
    int ret = 0;
    return ret;
}

static int set_hmirror(sensor_t *sensor, int enable)
{
    int ret = 0;
    return ret;
}

static int set_vflip(sensor_t *sensor, int enable)
{
    int ret = 0;
    return ret;
}

static int ioctl(sensor_t *sensor, int request, va_list ap)
{
    int ret = 0;
    return ret;
}

int h7stereocam_init(sensor_t *sensor)
{
    // Initialize sensor structure.
    sensor->reset               = reset;
    sensor->read_reg            = read_reg;
    sensor->write_reg           = write_reg;
    sensor->set_pixformat       = set_pixformat;
    sensor->set_framesize       = set_framesize;
    sensor->set_colorbar        = set_colorbar;
    sensor->set_auto_gain       = set_auto_gain;
    sensor->get_gain_db         = get_gain_db;
    sensor->set_auto_exposure   = set_auto_exposure;
    sensor->get_exposure_us     = get_exposure_us;
    sensor->set_hmirror         = set_hmirror;
    sensor->set_vflip           = set_vflip;
    sensor->ioctl               = ioctl;

    // Set sensor flags
    sensor->hw_flags.vsync      = 0;
    sensor->hw_flags.hsync      = 0;
    sensor->hw_flags.pixck      = 0;
    sensor->hw_flags.fsync      = 0;
    sensor->hw_flags.jpege      = 0;
    sensor->hw_flags.gs_bpp     = 1;

    return 0;
}

#endif // (OMV_ENABLE_H7STEREOCAM == 1)
