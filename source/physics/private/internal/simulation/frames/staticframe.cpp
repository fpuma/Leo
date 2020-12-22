#include <precompiledphysics.h>

#include <internal/simulation/frames/staticframe.h>

#include <box2d/b2_body.h>

namespace puma::physics
{
    StaticFrame::StaticFrame( b2Body* _body, const World* _world, FrameID _id )
        : m_frame( _body, _world, _id )
    {}

    //Common
    Vec2 StaticFrame::getPosition() const
    {
        return m_frame.getPosition();
    }

    void StaticFrame::setPosition( const Vec2& _position )
    {
        m_frame.setPosition( _position );
    }

    float StaticFrame::getAngle() const
    {
        return m_frame.getAngle();
    }

    void StaticFrame::setAngle( float _angle )
    {
        m_frame.setAngle( _angle );
    }

    void StaticFrame::setTransform( const Vec2& _position, float _angle )
    {
        m_frame.setTransform( _position, _angle );
    }

    FramePartID StaticFrame::addBody( const BodyInfo& _bodyInfo )
    {
        return m_frame.addBody( _bodyInfo );
    }

    FramePartID StaticFrame::addTrigger( const TriggerInfo& _triggerInfo )
    {
        return m_frame.addTrigger( _triggerInfo );
    }

    bool StaticFrame::isValid() const
    {
        return m_frame.isValid();
    }

    bool StaticFrame::isEnabled() const
    {
        assert( isValid() );
        return m_frame.isEnabled();
    }

    void StaticFrame::enable()
    {
        assert( isValid() );
        m_frame.enable();
    }

    void StaticFrame::disable()
    {
        assert( isValid() );
        m_frame.disable();
    }
}