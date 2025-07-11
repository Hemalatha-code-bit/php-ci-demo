<?php
$varName  = 'hello';
$var_name = 'hello';
$varname  = 'hello';
$_varName = 'hello';
$varname2 = 'hello';

class MyClass
{
    $varName  = 'hello';
    $var_name = 'hello';
    $varname  = 'hello';
    $_varName = 'hello';
    $varName2 = 'hello';

    public $varName  = 'hello';
    public $var_name = 'hello';
    public $varname  = 'hello';
    public $_varName = 'hello';
    public $varName2 = 'hello';

    protected $_varName  = 'hello';
    protected $_var_name = 'hello';
    protected $_varname  = 'hello';
    protected $varName   = 'hello';
    protected $_varName2 = 'hello';

    private $_varName  = 'hello';
    private $_var_name = 'hello';
    private $_varname  = 'hello';
    private $varName   = 'hello';
    private $_varName2 = 'hello';
}

echo $varName;
echo $var_name;
echo $varname;
echo $_varName;
echo $varName2;

echo "Hello $varName";
echo "Hello $var_name";
echo "Hello $varname";
echo "Hello $_varName";
echo "Hello $varName2";

echo 'Hello '.$varName;
echo 'Hello '.$var_name;
echo 'Hello '.$varname;
echo 'Hello '.$_varName;
echo 'Hello '.$varName2;

echo $_SERVER['var_name'];
echo $_REQUEST['var_name'];
echo $_GET['var_name'];
echo $_POST['var_name'];
echo $GLOBALS['var_name'];
echo $GLOBALS['var_name2'];

echo MyClass::$varName;
echo MyClass::$var_name;
echo MyClass::$varname;
echo MyClass::$_varName;
echo MyClass::$varName2;

echo $this->varName;
echo $this->var_name;
echo $this->varname;
echo $this->_varName;
echo $this->varName2;
echo $object->varName;
echo $object->var_name;
echo $object->varName2;
echo $object_name->varname;
echo $object_name->_varName;
echo $object_name->varName2;

echo $this->myFunction($one, $two);
echo $object->myFunction($one_two, $var2);

$error = "format is \$GLOBALS['$varName']";
$error = "format is \$GLOBALS['$varName2']";

echo $_SESSION['var_name'];
echo $_FILES['var_name'];
echo $_ENV['var_name'];
echo $_COOKIE['var_name'];
echo $_COOKIE['var_name2'];

$XML        = 'hello';
$myXML      = 'hello';
$XMLParser  = 'hello';
$xmlParser  = 'hello';
$xmlParser2 = 'hello';

echo "{$_SERVER['HOSTNAME']} $var_name";

$someObject->{$name};
$someObject->my_function($var_name);

var_dump($http_response_header);
var_dump($HTTP_RAW_POST_DATA);
var_dump($php_errormsg);

interface Base
{
    protected $anonymous;

    public function __construct();
}

$anonClass = new class() {
    public function foo($foo, $_foo, $foo_bar) {
        $bar = 1;
        $_bar = 2;
        $bar_foo = 3;
    }
};

echo $obj?->varName;
echo $obj?->var_name;
echo $obj?->varName;

enum SomeEnum
{
    public function foo($foo, $_foo, $foo_bar) {
        $bar = 1;
        $_bar = 2;
        $bar_foo = 3;
    }
}

class AsymVisibility {
    // The read scope is public, but not specified. Enforce the naming conventions anyway.
    private(set) $asymPublicImplied  = 'hello';
    private(set) $_asymPublicImplied = 'hello';

    // The read scope is private, so these properties should be handled as private properties.
    private private(set) $asymPrivate  = 'hello';
    private(set) private $_asymPrivate = 'hello';

    // The read scope is public/protected, so these properties should be handled as public properties.
    protected private(set) $asymProtectedPrivate  = 'hello';
    private(set) public $_asymPrivatePublic = 'hello';
}
