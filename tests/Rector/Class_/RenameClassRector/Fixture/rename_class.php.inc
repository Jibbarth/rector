<?php

namespace A;

class B
{
    public function createSelf(): B
    {
        return new B;
    }
}

?>
-----
<?php

namespace C;

class D
{
    public function createSelf(): \C\D
    {
        return new \C\D;
    }
}

?>
