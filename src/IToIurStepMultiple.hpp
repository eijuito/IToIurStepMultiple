/*
   Nome do Aquivo:   IToIurStepMultiple.h
   Descrição:        Library to enable multiple step motors
   Data criada:      2021-04-03
   Versao do Aquivo: 2021-04-10
   Dependências:     TimerOne
   Escrito por:      Celso Eiju Ito - eijuito@gmail.com
   	   	   	   	   	 Rui Lopes Viana - ruianaiv@gmail.com
   MCU:              ATMEGA 328P 16 MHz
   Board:            Arduino Uno/Mega/Mini
   Compilador        GCC para Arduino
   IDE:              Eclipse Mars CDT 8.8.1 com plugin Arduino C++ Jantje Baeyens 3.0.0
   Hardware:         Arduino UNO
   Colaboradores:    Rui Viana - ruianaiv@gmail.com
   Uso:              Generico
   Diagrams:         http://www.labirito.com/projetos/IToIurStepMultiple
   Copyright ®       2021 Labirito (www.labirito.com)
                     Este programa e de propriedade do Celso Eiju Ito eijuito@gmail.com
                     e de Rui Lopes Viana ruianaiv@gmail.com
                     É vedada a copia total ou parcial por pessoas não autorizadas
                     Nao é permitida a comercializacao ou locacao
   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
   REVISIONS: (latest entry first)
   2021-04-10 First tests
   2021-04-03 Primeira versao
   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
   NEXT STEPS: (priority first)
   Review
   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

#pragma once

#include <TimerOne.h>                       // Timer1 library
// #include "IToIurStepMultiple/Configuration.hpp"

#if !ITOIURSTEPMULTIPLE_DEBUG
#ifdef __clang__
#pragma clang system_header
#elif defined __GNUC__
#pragma GCC system_header
#endif
#endif
/*
#include "IToIurStepMultiple/Array/ArrayRef.hpp"
#include "IToIurStepMultiple/Object/ObjectRef.hpp"
#include "IToIurStepMultiple/Variant/VariantRef.hpp"

#include "IToIurStepMultiple/Document/DynamicJsonDocument.hpp"
#include "IToIurStepMultiple/Document/StaticJsonDocument.hpp"

#include "IToIurStepMultiple/Array/ArrayImpl.hpp"
#include "IToIurStepMultiple/Array/ElementProxy.hpp"
#include "IToIurStepMultiple/Array/Utilities.hpp"
#include "IToIurStepMultiple/Collection/CollectionImpl.hpp"
#include "IToIurStepMultiple/Object/MemberProxy.hpp"
#include "IToIurStepMultiple/Object/ObjectImpl.hpp"
#include "IToIurStepMultiple/Variant/ConverterImpl.hpp"
#include "IToIurStepMultiple/Variant/VariantCompare.hpp"
#include "IToIurStepMultiple/Variant/VariantImpl.hpp"


#include "IToIurStepMultiple/compatibility.hpp"
*/
namespace IToIurStepMultiple {
/*
typedef ITOIURSTEPMULTIPLE_NAMESPACE::ArrayConstRef JsonArrayConst;
typedef ITOIURSTEPMULTIPLE_NAMESPACE::ArrayRef JsonArray;
typedef ITOIURSTEPMULTIPLE_NAMESPACE::Float JsonFloat;
typedef ITOIURSTEPMULTIPLE_NAMESPACE::Integer JsonInteger;
typedef ITOIURSTEPMULTIPLE_NAMESPACE::ObjectConstRef JsonObjectConst;
typedef ITOIURSTEPMULTIPLE_NAMESPACE::ObjectRef JsonObject;
typedef ITOIURSTEPMULTIPLE_NAMESPACE::Pair JsonPair;
typedef ITOIURSTEPMULTIPLE_NAMESPACE::PairConst JsonPairConst;
typedef ITOIURSTEPMULTIPLE_NAMESPACE::String JsonString;
typedef ITOIURSTEPMULTIPLE_NAMESPACE::UInt JsonUInt;
typedef ITOIURSTEPMULTIPLE_NAMESPACE::VariantConstRef JsonVariantConst;
typedef ITOIURSTEPMULTIPLE_NAMESPACE::VariantRef JsonVariant;
using ITOIURSTEPMULTIPLE_NAMESPACE::BasicJsonDocument;
using ITOIURSTEPMULTIPLE_NAMESPACE::copyArray;
using ITOIURSTEPMULTIPLE_NAMESPACE::DeserializationError;
using ITOIURSTEPMULTIPLE_NAMESPACE::deserializeJson;
using ITOIURSTEPMULTIPLE_NAMESPACE::deserializeMsgPack;
using ITOIURSTEPMULTIPLE_NAMESPACE::DynamicJsonDocument;
using ITOIURSTEPMULTIPLE_NAMESPACE::JsonDocument;
using ITOIURSTEPMULTIPLE_NAMESPACE::measureJson;
using ITOIURSTEPMULTIPLE_NAMESPACE::serialized;
using ITOIURSTEPMULTIPLE_NAMESPACE::serializeJson;
using ITOIURSTEPMULTIPLE_NAMESPACE::serializeJsonPretty;
using ITOIURSTEPMULTIPLE_NAMESPACE::serializeMsgPack;
using ITOIURSTEPMULTIPLE_NAMESPACE::StaticJsonDocument;

namespace DeserializationOption {
using ITOIURSTEPMULTIPLE_NAMESPACE::Filter;
using ITOIURSTEPMULTIPLE_NAMESPACE::NestingLimit;
}  // namespace DeserializationOption
*/
}  // namespace IToIurStepMultiple
