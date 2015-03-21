
//------------------------------------------------------------------------------
// This code was generated by a tool.
//
//   Tool : Bond Compiler 3.02
//   File : Messages_apply.h
//
// Changes to this file may cause incorrect behavior and will be lost when
// the code is regenerated.
// <auto-generated />
//------------------------------------------------------------------------------

#pragma once

#include "Messages_types.h"
#include <bond/core/bond.h>
#include <bond/stream/output_buffer.h>


namespace Message
{
    
    //
    // Overloads of Apply function with common transforms for Request.
    // These overloads will be selected using argument dependent lookup
    // before bond::Apply function templates.
    //
    bool Apply(const bond::To<Request>& transform,
               const bond::bonded<Request>& value);

    bool Apply(const bond::InitSchemaDef& transform,
               const Request& value);
    
    bool Apply(const bond::To<Request>& transform,
               const bond::bonded<Request, bond::CompactBinaryReader<bond::InputBuffer>&>& value);

    bool Apply(const bond::To<Request>& transform,
               const bond::bonded<void, bond::CompactBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Serializer<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const Request& value);

    bool Apply(const bond::Serializer<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Request>& value);
    
    bool Apply(const bond::Serializer<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Request, bond::CompactBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Serializer<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Request, bond::FastBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Serializer<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Request, bond::SimpleBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Marshaler<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const Request& value);

    bool Apply(const bond::Marshaler<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Request>& value);
    
    bool Apply(const bond::Marshaler<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Request, bond::CompactBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Marshaler<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Request, bond::FastBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Marshaler<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Request, bond::SimpleBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::To<Request>& transform,
               const bond::bonded<Request, bond::FastBinaryReader<bond::InputBuffer>&>& value);

    bool Apply(const bond::To<Request>& transform,
               const bond::bonded<void, bond::FastBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Serializer<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const Request& value);

    bool Apply(const bond::Serializer<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Request>& value);
    
    bool Apply(const bond::Serializer<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Request, bond::CompactBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Serializer<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Request, bond::FastBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Serializer<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Request, bond::SimpleBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Marshaler<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const Request& value);

    bool Apply(const bond::Marshaler<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Request>& value);
    
    bool Apply(const bond::Marshaler<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Request, bond::CompactBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Marshaler<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Request, bond::FastBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Marshaler<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Request, bond::SimpleBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::To<Request>& transform,
               const bond::bonded<Request, bond::SimpleBinaryReader<bond::InputBuffer>&>& value);

    bool Apply(const bond::To<Request>& transform,
               const bond::bonded<void, bond::SimpleBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Serializer<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const Request& value);

    bool Apply(const bond::Serializer<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Request>& value);
    
    bool Apply(const bond::Serializer<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Request, bond::CompactBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Serializer<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Request, bond::FastBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Serializer<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Request, bond::SimpleBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Marshaler<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const Request& value);

    bool Apply(const bond::Marshaler<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Request>& value);
    
    bool Apply(const bond::Marshaler<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Request, bond::CompactBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Marshaler<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Request, bond::FastBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Marshaler<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Request, bond::SimpleBinaryReader<bond::InputBuffer>&>& value);
    
    //
    // Overloads of Apply function with common transforms for Response.
    // These overloads will be selected using argument dependent lookup
    // before bond::Apply function templates.
    //
    bool Apply(const bond::To<Response>& transform,
               const bond::bonded<Response>& value);

    bool Apply(const bond::InitSchemaDef& transform,
               const Response& value);
    
    bool Apply(const bond::To<Response>& transform,
               const bond::bonded<Response, bond::CompactBinaryReader<bond::InputBuffer>&>& value);

    bool Apply(const bond::To<Response>& transform,
               const bond::bonded<void, bond::CompactBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Serializer<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const Response& value);

    bool Apply(const bond::Serializer<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Response>& value);
    
    bool Apply(const bond::Serializer<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Response, bond::CompactBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Serializer<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Response, bond::FastBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Serializer<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Response, bond::SimpleBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Marshaler<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const Response& value);

    bool Apply(const bond::Marshaler<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Response>& value);
    
    bool Apply(const bond::Marshaler<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Response, bond::CompactBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Marshaler<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Response, bond::FastBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Marshaler<bond::CompactBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Response, bond::SimpleBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::To<Response>& transform,
               const bond::bonded<Response, bond::FastBinaryReader<bond::InputBuffer>&>& value);

    bool Apply(const bond::To<Response>& transform,
               const bond::bonded<void, bond::FastBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Serializer<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const Response& value);

    bool Apply(const bond::Serializer<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Response>& value);
    
    bool Apply(const bond::Serializer<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Response, bond::CompactBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Serializer<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Response, bond::FastBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Serializer<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Response, bond::SimpleBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Marshaler<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const Response& value);

    bool Apply(const bond::Marshaler<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Response>& value);
    
    bool Apply(const bond::Marshaler<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Response, bond::CompactBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Marshaler<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Response, bond::FastBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Marshaler<bond::FastBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Response, bond::SimpleBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::To<Response>& transform,
               const bond::bonded<Response, bond::SimpleBinaryReader<bond::InputBuffer>&>& value);

    bool Apply(const bond::To<Response>& transform,
               const bond::bonded<void, bond::SimpleBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Serializer<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const Response& value);

    bool Apply(const bond::Serializer<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Response>& value);
    
    bool Apply(const bond::Serializer<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Response, bond::CompactBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Serializer<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Response, bond::FastBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Serializer<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Response, bond::SimpleBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Marshaler<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const Response& value);

    bool Apply(const bond::Marshaler<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Response>& value);
    
    bool Apply(const bond::Marshaler<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Response, bond::CompactBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Marshaler<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Response, bond::FastBinaryReader<bond::InputBuffer>&>& value);
    
    bool Apply(const bond::Marshaler<bond::SimpleBinaryWriter<bond::OutputBuffer> >& transform,
               const bond::bonded<Response, bond::SimpleBinaryReader<bond::InputBuffer>&>& value);
    
} // namespace Message
