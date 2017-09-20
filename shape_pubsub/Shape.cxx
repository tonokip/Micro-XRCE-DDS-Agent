// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*! 
 * @file Shape.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace { char dummy; }
#endif

#include "Shape.h"

#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

ShapeType::ShapeType()
{

    m_x = 0;
    m_y = 0;
    m_shapesize = 0;
}

ShapeType::~ShapeType()
{
}

ShapeType::ShapeType(const ShapeType &x)
{
    m_color = x.m_color;
    m_x = x.m_x;
    m_y = x.m_y;
    m_shapesize = x.m_shapesize;
}

ShapeType::ShapeType(ShapeType &&x)
{
    m_color = std::move(x.m_color);
    m_x = x.m_x;
    m_y = x.m_y;
    m_shapesize = x.m_shapesize;
}

ShapeType& ShapeType::operator=(const ShapeType &x)
{
    m_color = x.m_color;
    m_x = x.m_x;
    m_y = x.m_y;
    m_shapesize = x.m_shapesize;
    
    return *this;
}

ShapeType& ShapeType::operator=(ShapeType &&x)
{
    m_color = std::move(x.m_color);
    m_x = x.m_x;
    m_y = x.m_y;
    m_shapesize = x.m_shapesize;
    
    return *this;
}

size_t ShapeType::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;
            
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 255 + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    return current_alignment - initial_alignment;
}

size_t ShapeType::getCdrSerializedSize(const ShapeType& data, size_t current_alignment)
{
    size_t initial_alignment = current_alignment;
            
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.color().size() + 1;

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);


    return current_alignment - initial_alignment;
}

void ShapeType::serialize(eprosima::fastcdr::Cdr &scdr) const
{
    scdr << m_color;
    scdr << m_x;
    scdr << m_y;
    scdr << m_shapesize;
}

void ShapeType::deserialize(eprosima::fastcdr::Cdr &dcdr)
{
    dcdr >> m_color;
    dcdr >> m_x;
    dcdr >> m_y;
    dcdr >> m_shapesize;
}

size_t ShapeType::getKeyMaxCdrSerializedSize(size_t current_alignment)
{
	size_t current_align = current_alignment;
            
     current_align += 4 + eprosima::fastcdr::Cdr::alignment(current_align, 4) + 255 + 1;
     




    return current_align;
}

bool ShapeType::isKeyDefined()
{
    return true;
}

void ShapeType::serializeKey(eprosima::fastcdr::Cdr &scdr) const
{
	 scdr << m_color;  
	 
	 
	 
}