#pragma once
#include "lf-rfid-scene-generic.h"
#include "../helpers/key-info.h"

class LfrfidSceneEmulateEMMarine : public LfrfidScene {
public:
    void on_enter(LfrfidApp* app) final;
    bool on_event(LfrfidApp* app, LfrfidEvent* event) final;
    void on_exit(LfrfidApp* app) final;

private:
    const uint8_t data[5] = {0x53, 0x00, 0x5F, 0xB3, 0xC2};
};