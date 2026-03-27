struct IMUReading {
    double timestamp;
    double ax, ay, az; // Accelerometer
    double gx, gy, gz; // Gyroscope
};

void saveToCSV(IMUReading reading);
