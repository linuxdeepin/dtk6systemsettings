// SPDX-FileCopyrightText: 2022 UnionTech Software Technology Co., Ltd.
//
// SPDX-License-Identifier: LGPL-3.0-or-later

#pragma once

#include <qobject.h>
#include "namespace.h"

DPOWER_BEGIN_NAMESPACE
class DPowerSettingsPrivate;

class DPowerSettings : public QObject
{
    Q_OBJECT
public:
    explicit DPowerSettings(QObject *parent = nullptr);
    virtual ~DPowerSettings();

    Q_PROPERTY(QString cpuGovernor READ cpuGovernor NOTIFY cpuGovernorChanged);
    Q_PROPERTY(QString mode READ mode WRITE setMode NOTIFY modeChanged);
    Q_PROPERTY(bool autoPowerSavingOnBattery READ autoPowerSavingOnBattery WRITE setAutoPowerSavingOnBattery NOTIFY
                   autoPowerSavingOnBatteryChanged);
    Q_PROPERTY(bool autoPowerSavingWhenBatteryLow READ autoPowerSavingWhenBatteryLow WRITE setAutoPowerSavingWhenBatteryLow NOTIFY
                   autoPowerSavingWhenBatteryLowChanged);
    Q_PROPERTY(QString powerSavingBrightnessData READ powerSavingBrightnessData WRITE setPowerSavingBrightnessData NOTIFY
                   powerSavingBrightnessDataChanged);
    Q_PROPERTY(quint32 powerSavingBrightnessDropPercent READ powerSavingBrightnessDropPercent WRITE
                   setPowerSavingBrightnessDropPercent NOTIFY powerSavingBrightnessDropPercentChanged);
    Q_PROPERTY(qint32 batteryLidClosedAction READ batteryLidClosedAction WRITE setBatteryLidClosedAction NOTIFY
                   batteryLidClosedActionChanged);
    Q_PROPERTY(qint32 batteryLockDelay READ batteryLockDelay WRITE setBatteryLockDelay NOTIFY batteryLockDelayChanged);
    Q_PROPERTY(qint32 batteryPressPowerBtnAction READ batteryPressPowerBtnAction WRITE setBatteryPressPowerBtnAction NOTIFY
                   batteryPressPowerBtnActionChanged);
    Q_PROPERTY(qint32 batteryScreenBlackDelay READ batteryScreenBlackDelay WRITE setBatteryScreenBlackDelay NOTIFY
                   batteryScreenBlackDelayChanged);
    Q_PROPERTY(qint32 batteryScreensaverDelay READ batteryScreensaverDelay WRITE setBatteryScreensaverDelay NOTIFY
                   batteryScreensaverDelayChanged);
    Q_PROPERTY(qint32 batterySleepDelay READ batterySleepDelay WRITE setBatterySleepDelay NOTIFY batterySleepDelayChanged);
    Q_PROPERTY(qint32 linePowerLidClosedAction READ linePowerLidClosedAction WRITE setLinePowerLidClosedAction NOTIFY
                   linePowerLidClosedActionChanged);
    Q_PROPERTY(qint32 linePowerLockDelay READ linePowerLockDelay WRITE setLinePowerLockDelay NOTIFY linePowerLockDelayChanged);
    Q_PROPERTY(qint32 linePowerPressPowerBtnAction READ linePowerPressPowerBtnAction WRITE setLinePowerPressPowerBtnAction NOTIFY
                   linePowerPressPowerBtnActionChanged);
    Q_PROPERTY(qint32 linePowerScreenBlackDelay READ linePowerScreenBlackDelay WRITE setLinePowerScreenBlackDelay NOTIFY
                   linePowerScreenBlackDelayChanged);
    Q_PROPERTY(qint32 linePowerScreensaverDelay READ linePowerScreensaverDelay WRITE setLinePowerScreensaverDelay NOTIFY
                   linePowerScreensaverDelayChanged);
    Q_PROPERTY(
        qint32 linePowerSleepDelay READ linePowerSleepDelay WRITE setLinePowerSleepDelay NOTIFY linePowerSleepDelayChanged);
    Q_PROPERTY(qint32 lowPowerAutoSleepThreshold READ lowPowerAutoSleepThreshold WRITE setLowPowerAutoSleepThreshold NOTIFY
                   lowPowerAutoSleepThresholdChanged);
    Q_PROPERTY(
        bool lowPowerNotifyEnable READ lowPowerNotifyEnable WRITE setLowPowerNotifyEnable NOTIFY lowPowerNotifyEnableChanged);
    Q_PROPERTY(qint32 lowPowerNotifyThreshold READ lowPowerNotifyThreshold WRITE setLowPowerNotifyThreshold NOTIFY
                   lowPowerNotifyThresholdChanged);
    Q_PROPERTY(bool screenBlackLock READ screenBlackLock WRITE setScreenBlackLock NOTIFY screenBlackLockChanged);
    Q_PROPERTY(bool sleepLock READ sleepLock WRITE setSleepLock NOTIFY sleepLockChanged);
    QString cpuGovernor() const;
    QString mode() const;
    void setMode(const QString &mode);
    bool autoPowerSavingOnBattery() const;
    void setAutoPowerSavingOnBattery(const bool enabled);
    bool autoPowerSavingWhenBatteryLow() const;
    void setAutoPowerSavingWhenBatteryLow(const bool enabled);
    QString powerSavingBrightnessData() const;
    void setPowerSavingBrightnessData(const QString &data);
    quint32 powerSavingBrightnessDropPercent() const;
    void setPowerSavingBrightnessDropPercent(const quint32 value);
    qint32 batteryLidClosedAction() const;
    void setBatteryLidClosedAction(const qint32 value);
    qint32 batteryLockDelay() const;
    void setBatteryLockDelay(const qint32 value);
    qint32 batteryPressPowerBtnAction() const;
    void setBatteryPressPowerBtnAction(const qint32 value);
    qint32 batteryScreenBlackDelay() const;
    void setBatteryScreenBlackDelay(const qint32 value);
    qint32 batteryScreensaverDelay() const;
    void setBatteryScreensaverDelay(const qint32 value);
    qint32 batterySleepDelay() const;
    void setBatterySleepDelay(const qint32 value);
    qint32 linePowerLidClosedAction() const;
    void setLinePowerLidClosedAction(const qint32 value);
    qint32 linePowerLockDelay() const;
    void setLinePowerLockDelay(const qint32 value);
    qint32 linePowerPressPowerBtnAction() const;
    void setLinePowerPressPowerBtnAction(const qint32 value);
    qint32 linePowerScreenBlackDelay() const;
    void setLinePowerScreenBlackDelay(const qint32 value);
    qint32 linePowerScreensaverDelay() const;
    void setLinePowerScreensaverDelay(const qint32 value);
    qint32 linePowerSleepDelay() const;
    void setLinePowerSleepDelay(const qint32 value);
    qint32 lowPowerAutoSleepThreshold() const;
    void setLowPowerAutoSleepThreshold(const qint32 value);
    bool lowPowerNotifyEnable() const;
    void setLowPowerNotifyEnable(const bool value);
    qint32 lowPowerNotifyThreshold() const;
    void setLowPowerNotifyThreshold(const qint32 value);
    bool screenBlackLock() const;
    void setScreenBlackLock(const bool value);
    bool sleepLock() const;
    void setSleepLock(const bool value);

signals:
    void cpuGovernorChanged(const QString &value);
    void modeChanged(const QString &mode);
    void autoPowerSavingOnBatteryChanged(const bool enabled);
    void autoPowerSavingWhenBatteryLowChanged(const bool enabled);
    void powerSavingBrightnessDataChanged(const QString &data);
    void powerSavingBrightnessDropPercentChanged(const quint32 value);
    void batteryLidClosedActionChanged(const qint32 value);
    void batteryLockDelayChanged(const qint32 value);
    void batteryPressPowerBtnActionChanged(const qint32 value);
    void batteryScreenBlackDelayChanged(const qint32 value);
    void batteryScreensaverDelayChanged(const qint32 value);
    void batterySleepDelayChanged(const qint32 value);
    void linePowerLidClosedActionChanged(const qint32 value);
    void linePowerLockDelayChanged(const qint32 value);
    void linePowerPressPowerBtnActionChanged(const qint32 value);
    void linePowerScreenBlackDelayChanged(const qint32 value);
    void linePowerScreensaverDelayChanged(const qint32 value);
    void linePowerSleepDelayChanged(const qint32 value);
    void lowPowerAutoSleepThresholdChanged(const qint32 value);
    void lowPowerNotifyEnableChanged(const bool value);
    void lowPowerNotifyThresholdChanged(const qint32 value);
    void screenBlackLockChanged(const bool value);
    void sleepLockChanged(const bool value);

public slots:
    void reset();

private:
    QScopedPointer<DPowerSettingsPrivate> d_ptr;
    Q_DECLARE_PRIVATE(DPowerSettings)
};

DPOWER_END_NAMESPACE
