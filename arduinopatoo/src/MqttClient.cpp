#include "MqttClient.h"

MqttClient::MqttClient(WiFiClient& espClient, const char* mqttServer, const char* topicEntrada, const char* topicSalida)
    : client(espClient), mqttServer(mqttServer), topicEntrada(topicEntrada), topicSalida(topicSalida) {
}

void MqttClient::setup() {
    // Implementa la configuración del cliente MQTT aquí.
    // Usa this->client para configurar y conectar.
    // ...
}

void MqttClient::reconnect() {
    // Implementa la lógica de reconexión aquí.
    // ...
}

void MqttClient::loop() {
    // Implementa el loop del cliente MQTT aquí.
    // ...
}

void MqttClient::publish(const char* message) {
    // Implementa la publicación de mensajes MQTT aquí.
    // ...
}

void MqttClient::setCallback(std::function<void(char*, byte*, unsigned int)> callback) {
    client.setCallback(callback);
}
