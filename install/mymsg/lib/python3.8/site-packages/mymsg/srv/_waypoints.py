# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mymsg:srv/Waypoints.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Waypoints_Request(type):
    """Metaclass of message 'Waypoints_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mymsg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mymsg.srv.Waypoints_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__waypoints__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__waypoints__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__waypoints__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__waypoints__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__waypoints__request

            from geometry_msgs.msg import PoseStamped
            if PoseStamped.__class__._TYPE_SUPPORT is None:
                PoseStamped.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Waypoints_Request(metaclass=Metaclass_Waypoints_Request):
    """Message class 'Waypoints_Request'."""

    __slots__ = [
        '_waypoints',
    ]

    _fields_and_field_types = {
        'waypoints': 'geometry_msgs/PoseStamped',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import PoseStamped
        self.waypoints = kwargs.get('waypoints', PoseStamped())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.waypoints != other.waypoints:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def waypoints(self):
        """Message field 'waypoints'."""
        return self._waypoints

    @waypoints.setter
    def waypoints(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'waypoints' field must be a sub message of type 'PoseStamped'"
        self._waypoints = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Waypoints_Response(type):
    """Metaclass of message 'Waypoints_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mymsg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mymsg.srv.Waypoints_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__waypoints__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__waypoints__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__waypoints__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__waypoints__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__waypoints__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Waypoints_Response(metaclass=Metaclass_Waypoints_Response):
    """Message class 'Waypoints_Response'."""

    __slots__ = [
        '_complete',
    ]

    _fields_and_field_types = {
        'complete': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.complete = kwargs.get('complete', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.complete != other.complete:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def complete(self):
        """Message field 'complete'."""
        return self._complete

    @complete.setter
    def complete(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'complete' field must be of type 'bool'"
        self._complete = value


class Metaclass_Waypoints(type):
    """Metaclass of service 'Waypoints'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mymsg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mymsg.srv.Waypoints')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__waypoints

            from mymsg.srv import _waypoints
            if _waypoints.Metaclass_Waypoints_Request._TYPE_SUPPORT is None:
                _waypoints.Metaclass_Waypoints_Request.__import_type_support__()
            if _waypoints.Metaclass_Waypoints_Response._TYPE_SUPPORT is None:
                _waypoints.Metaclass_Waypoints_Response.__import_type_support__()


class Waypoints(metaclass=Metaclass_Waypoints):
    from mymsg.srv._waypoints import Waypoints_Request as Request
    from mymsg.srv._waypoints import Waypoints_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
