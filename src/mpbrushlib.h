#ifndef MPBRUSHLIB_H
#define MPBRUSHLIB_H

#include <QMap>
#include <QString>
#include <QSize>
#include <QColor>
#include <QGraphicsScene>

class SignalHandler;

class MPBrushLib
{
public:
    static void add_to_scene(QGraphicsScene* scene, int z_value=-1);

    static void set_surface_size(QSize size);

    static QSize surface_size();

    static void load_brush(QString brush_path, bool preserveSize=true);

    static QString get_active_brush();

    static void set_brush_color(QColor color);

    static void load_image(const QImage& image);
    
    static QImage render_image();

    static void clear_surface();

    static void start_stroke();

    static void end_stroke();

    static void basic_stroke_to(float x, float y);

    static void stroke_to(float x, float y, float pressure, float xtilt, float ytilt);

    enum class BrushSetting {
        MYPAINT_BRUSH_SETTING_OPAQUE,
        MYPAINT_BRUSH_SETTING_OPAQUE_MULTIPLY,
        MYPAINT_BRUSH_SETTING_OPAQUE_LINEARIZE,
        MYPAINT_BRUSH_SETTING_RADIUS_LOGARITHMIC,
        MYPAINT_BRUSH_SETTING_HARDNESS,
        MYPAINT_BRUSH_SETTING_ANTI_ALIASING,
        MYPAINT_BRUSH_SETTING_DABS_PER_BASIC_RADIUS,
        MYPAINT_BRUSH_SETTING_DABS_PER_ACTUAL_RADIUS,
        MYPAINT_BRUSH_SETTING_DABS_PER_SECOND,
        MYPAINT_BRUSH_SETTING_RADIUS_BY_RANDOM,
        MYPAINT_BRUSH_SETTING_SPEED1_SLOWNESS,
        MYPAINT_BRUSH_SETTING_SPEED2_SLOWNESS,
        MYPAINT_BRUSH_SETTING_SPEED1_GAMMA,
        MYPAINT_BRUSH_SETTING_SPEED2_GAMMA,
        MYPAINT_BRUSH_SETTING_OFFSET_BY_RANDOM,
        MYPAINT_BRUSH_SETTING_OFFSET_BY_SPEED,
        MYPAINT_BRUSH_SETTING_OFFSET_BY_SPEED_SLOWNESS,
        MYPAINT_BRUSH_SETTING_SLOW_TRACKING,
        MYPAINT_BRUSH_SETTING_SLOW_TRACKING_PER_DAB,
        MYPAINT_BRUSH_SETTING_TRACKING_NOISE,
        MYPAINT_BRUSH_SETTING_COLOR_H,
        MYPAINT_BRUSH_SETTING_COLOR_S,
        MYPAINT_BRUSH_SETTING_COLOR_V,
        MYPAINT_BRUSH_SETTING_RESTORE_COLOR,
        MYPAINT_BRUSH_SETTING_CHANGE_COLOR_H,
        MYPAINT_BRUSH_SETTING_CHANGE_COLOR_L,
        MYPAINT_BRUSH_SETTING_CHANGE_COLOR_HSL_S,
        MYPAINT_BRUSH_SETTING_CHANGE_COLOR_V,
        MYPAINT_BRUSH_SETTING_CHANGE_COLOR_HSV_S,
        MYPAINT_BRUSH_SETTING_SMUDGE,
        MYPAINT_BRUSH_SETTING_SMUDGE_LENGTH,
        MYPAINT_BRUSH_SETTING_SMUDGE_RADIUS_LOG,
        MYPAINT_BRUSH_SETTING_ERASER,
        MYPAINT_BRUSH_SETTING_STROKE_THRESHOLD,
        MYPAINT_BRUSH_SETTING_STROKE_DURATION_LOGARITHMIC,
        MYPAINT_BRUSH_SETTING_STROKE_HOLDTIME,
        MYPAINT_BRUSH_SETTING_CUSTOM_INPUT,
        MYPAINT_BRUSH_SETTING_CUSTOM_INPUT_SLOWNESS,
        MYPAINT_BRUSH_SETTING_ELLIPTICAL_DAB_RATIO,
        MYPAINT_BRUSH_SETTING_ELLIPTICAL_DAB_ANGLE,
        MYPAINT_BRUSH_SETTING_DIRECTION_FILTER,
        MYPAINT_BRUSH_SETTING_LOCK_ALPHA,
        MYPAINT_BRUSH_SETTING_COLORIZE,
        MYPAINT_BRUSH_SETTING_SNAP_TO_PIXEL,
        MYPAINT_BRUSH_SETTING_PRESSURE_GAIN_LOG,
        MYPAINT_BRUSH_SETTINGS_COUNT
    };

    static float get_brush_value(BrushSetting valueType);

    static void set_brush_value(BrushSetting valueType, float value);

private:
    static SignalHandler* signalHandler;
    static QString brushpath;
};

#endif // MPBRUSHLIB_H
