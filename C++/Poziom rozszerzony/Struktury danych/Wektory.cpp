// Umieść definicję struktury i nadpisanie operatorów tutaj
#pragma once

struct Vector2 {
    double x;
    double y;

    Vector2(double _x = 0.0, double _y = 0.0) : x(_x), y(_y) {}

    // Addition of two vectors
    Vector2 operator+(const Vector2& other) const {
        return Vector2(x + other.x, y + other.y);
    }

    // Subtraction of two vectors
    Vector2 operator-(const Vector2& other) const {
        return Vector2(x - other.x, y - other.y);
    }

    // Scalar multiplication (vector * scalar)
    Vector2 operator*(double scalar) const {
        return Vector2(x * scalar, y * scalar);
    }

    // Scalar multiplication (scalar * vector)
    friend Vector2 operator*(double scalar, const Vector2& vec) {
        return vec * scalar;
    }

    // Dot product of two vectors
    double operator*(const Vector2& other) const {
        return x * other.x + y * other.y;
    }

    // Calculate the magnitude (length) of the vector
    double magnitude() const {
        return sqrt(x * x + y * y);
    }
};

