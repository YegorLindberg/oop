//
//  CCircle.cpp
//  TestsGeometricShapes
//
//  Created by Moore on 12/05/2018.
//  Copyright © 2018 Moore. All rights reserved.
//

#include "CCircle.hpp"
#include "CPoint.hpp"
#include <string>
#include <sstream>
#include "math.h"

CPoint CCircle::GetCenter() const
{
    return m_center;
}

double CCircle::GetRadius() const
{
    return m_radius;
}

std::string CCircle::GetOutlineColor() const
{
    return m_outlineColor;
}

std::string CCircle::GetFillColor() const
{
    return m_fillColor;
}

double CCircle::GetArea() const
{
    return m_radius * m_radius * M_PI;
}

double CCircle::GetPerimeter() const
{
    return 2 * m_radius * M_PI;
}

std::string CCircle::ToString() const
{
    std::ostringstream strStream;
    strStream << "Circle:" << "\n"
    << "\t* area = " << GetArea() << "\n"
    << "\t* perimeter = " << GetPerimeter() << "\n"
    << "\t* center = " << GetCenter().x << " - x; " << GetCenter().y << " - y;\n"
    << "\t* radius = " << GetRadius() << "\n"
    << "\t* outline color = " << GetOutlineColor() << "\n"
    << "\t* fill color = " << GetFillColor() << "\n";
    return strStream.str();
}
