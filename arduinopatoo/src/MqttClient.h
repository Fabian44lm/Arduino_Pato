#pragma once

#ifndef MqttClient_h
#define MqttClient_h

#include <WiFi.h>
#include <Arduino.h>
#include <PubSubClient.h>

class MqttClient {
public:
    MqttClient(WiFiClient& espClient, const char* mqttServer, const char* topicEntrada, const char* topicSalida);
    void setup();
    void reconnect();
    void loop();
    void publish(const char* message);
    void setCallback(std::function<void(char*, byte*, unsigned int)> callback);
private:
    PubSubClient client;
    const char* mqttServer;
    const char* topicEntrada;
    const char* topicSalida;
};

#endif
