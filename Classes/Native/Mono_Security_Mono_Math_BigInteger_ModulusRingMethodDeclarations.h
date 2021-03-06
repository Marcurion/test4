﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t630;
// Mono.Math.BigInteger
struct BigInteger_t629;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m2494 (ModulusRing_t630 * __this, BigInteger_t629 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m2495 (ModulusRing_t630 * __this, BigInteger_t629 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t629 * ModulusRing_Multiply_m2496 (ModulusRing_t630 * __this, BigInteger_t629 * ___a, BigInteger_t629 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t629 * ModulusRing_Difference_m2497 (ModulusRing_t630 * __this, BigInteger_t629 * ___a, BigInteger_t629 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t629 * ModulusRing_Pow_m2498 (ModulusRing_t630 * __this, BigInteger_t629 * ___a, BigInteger_t629 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t629 * ModulusRing_Pow_m2499 (ModulusRing_t630 * __this, uint32_t ___b, BigInteger_t629 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
